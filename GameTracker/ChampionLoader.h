#pragma once
#include <cpprest\http_client.h>
#include <cpprest\filestream.h>
#include <pplx\pplxtasks.h>
#include <cpprest/json.h>
class ChampionLoader
{
public:
	ChampionLoader();
	~ChampionLoader();
	std::vector<std::wstring> loadChampions();
	pplx::task<std::vector<std::wstring>> loadChampionsAsync();
private:
	pplx::task<web::json::value> requestChampionJSONAsync();
};

