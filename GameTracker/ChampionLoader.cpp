#include "ChampionLoader.h"

using namespace web::http;                  
using namespace web::http::client;
using namespace web;

#define CHAMPION_DATA_URL "/data/en_US/champion.json"
#define BASE_URL L"https://ddragon.leagueoflegends.com/cdn/6.24.1"

ChampionLoader::ChampionLoader()
{
}


ChampionLoader::~ChampionLoader()
{
}

pplx::task<std::vector<std::wstring>> ChampionLoader::loadChampionsAsync()
{
	return this->requestChampionJSONAsync()
	.then([](pplx::task<json::value> jsonTask) -> pplx::task<std::vector<std::wstring>>
	{
		try
		{
			std::vector<std::wstring> championNames;
			const json::value& v = jsonTask.get();
			auto champions = v.at(U("data")).as_object();
			for (auto champ : champions) {
				std::wstring name = champ.second.at(U("name")).as_string();
				championNames.push_back(name);
			}
			return pplx::task_from_result(championNames);
		}
		catch (const http_exception& e)
		{
			// Print error.
			std::wostringstream ss;
			ss << e.what() << std::endl;
			std::wcout << ss.str();
			return pplx::task_from_result(std::vector<std::wstring>());
		}
	});
}

std::vector<std::wstring> ChampionLoader::loadChampions() {
	return this->loadChampionsAsync().get();
}

pplx::task<json::value> ChampionLoader::requestChampionJSONAsync()
{
	http_client client(BASE_URL);
	uri_builder builder(U(CHAMPION_DATA_URL));
	return client.request(methods::GET, builder.to_string()).then([](http_response response) -> pplx::task<json::value>
	{
		if (response.status_code() == status_codes::OK)
		{
			return response.extract_json();
		}
	
		// Handle error cases, for now return empty json value...
		return pplx::task_from_result(json::value());
	});

}