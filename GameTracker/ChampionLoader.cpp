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

void ChampionLoader::loadChampions()
{
	this->requestChampionJSONAsync()
	.then([](pplx::task<json::value> jsonTask)
	{
		try
		{
			const json::value& v = jsonTask.get();
			std::wstring json(v.serialize());
			std::wcout << json << std::endl;
		}
		catch (const http_exception& e)
		{
			// Print error.
			std::wostringstream ss;
			ss << e.what() << std::endl;
			std::wcout << ss.str();
		}
	});
	

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