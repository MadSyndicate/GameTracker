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
	void loadChampions();
private:
	pplx::task<web::json::value> requestChampionJSONAsync();
};

