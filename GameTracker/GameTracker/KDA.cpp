#include "KDA.h"

#include <iostream>

using namespace std;

// ---------------------------------- definition of contructor -----------------------------------------------

KDA::KDA() {
	set_kills(0);
	set_deaths(0);
	set_assist(0);
}

// ---------------------------------- definition of elementals -----------------------------------------------

// --------------------- set-functions -------------------------

void KDA::set_kills(int blows) {
	kills = blows;
}

void KDA::set_deaths(int rip) {
	deaths = rip;
}

void KDA::set_assist(int ksed) {
	assists = ksed;
}
// --------------------- get-functions -------------------------

int KDA::get_kills() {
	return kills;
}

int KDA::get_deaths() {
	return deaths;
}

int KDA::get_assists() {
	return assists;
}

// --------------------- test-functions -------------------------

void KDA::print_KDA() {
	cout << "Here is ur bear... i mean KDA :3" << endl;
	cout << "Kills: " << get_kills() << endl;
	cout << "Deaths: " << get_deaths() << endl;
	cout << "Assists: " << get_assists() << endl;
	cout << "DONE!" << endl << endl;
}