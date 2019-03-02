#pragma once
#ifndef _KDA_H_
#define _KDA_H_
#include <string>


class KDA {
private:
	// -------------------------------------- data of class --------------------------------------

	int kills, deaths, assists;

public:
	// -------------------------------------- declaration of (standart) constructors --------------------------------------

	KDA();

	// -------------------------------------- elemental functions --------------------------------------

	void set_kills(int blown);	// kills = blows
	void set_deaths(int rip);	// deaths = rip
	void set_assist(int ksed);	// assist = ksed

	int get_kills();		
	int get_deaths();		
	int get_assists();		

	void print_KDA();		// for testing withjout implementing into class 'AddGame'
	friend class AddMatch;

};
#endif