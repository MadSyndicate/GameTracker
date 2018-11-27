#include "match.h"

#include <iostream>

using namespace std;

// ---------------------------------- definition of contructor -----------------------------------------------

//Addmatch:Addmatch(int iChamp, int eChamo, bool FB, int mF, int eF, float iXP, float eXP, bool Won_lane, int rWin, int rLose, int play)): myChamp{ iChamp }, enemyChamp{ eChamp }, FB_Lane{ FB }, my_Farm{ mF }, enemy_Farm{ eF }, my_XP{ iXP }, enemy_XP{ eXP }, won_lane{ Won_lane }, reason_win{ rWin }, reason_lose{ rLose }, playstyle{ play } {}

AddMatch::AddMatch()
{
	set_myChamp(0);
	set_enemyChamp(0);
	set_FB_Lane_false();
	set_myFarm(0);
	set_enemyFarm(0);
	set_myXP(0.0f);
	set_enemyXP(0.0f);
	set_lostLane();
	set_reasonWon(0);
	set_reasonLose(0);
	set_playstyle(0);
}


// ---------------------------------- definition of elementals -----------------------------------------------

// --------------------- set-functions -------------------------

void AddMatch::set_myChamp(int iChamp) {
	myChamp = iChamp;
}

void AddMatch::set_enemyChamp(int eChamp) {
	enemyChamp = eChamp;
}

void AddMatch::set_FB_Lane_true() {
	FB_Lane = true;
}

void AddMatch::set_FB_Lane_false() {
	FB_Lane = false;
}

void AddMatch::set_myFarm(int mF) {
	my_Farm = mF;
}

void AddMatch::set_enemyFarm(int eF) {
	enemy_Farm = eF;
}

void AddMatch::set_myXP(float iXP) {
	my_XP = iXP;
}

void AddMatch::set_enemyXP(float eXP) {
	enemy_XP = eXP;
}

void AddMatch::set_wonLane() {
	won_lane = true;
}

void AddMatch::set_lostLane() {
	won_lane = false;
}

void AddMatch::set_reasonWon(int rWin) {
	reason_win = rWin;
}

void AddMatch::set_reasonLose(int rLose) {
	reason_lose = rLose;
}

void AddMatch::set_playstyle(int play) {
	playstyle = play;
}

// --------------------- get-functions -------------------------

int AddMatch::get_myChamp() {
	return myChamp;
}

int AddMatch::get_enemyChamp() {
	return enemyChamp;
}

bool AddMatch::get_FB_Lane() {
	return FB_Lane;
}

int AddMatch::get_myFarm() {
	return my_Farm;
}

int AddMatch::get_enemyFarm() {
	return enemy_Farm;
}

float AddMatch::get_myXP() {
	return my_XP;
}

float AddMatch::get_enemyXP() {
	return enemy_XP;
}

bool AddMatch::get_wonLane() {
	return won_lane;
}

int AddMatch::get_reasonWon() {
	return reason_win;
}

int AddMatch::get_reasonLose() {
	return reason_lose;
}

int AddMatch::get_playstyle() {
	return playstyle;
}

// --------------------- test-functions -------------------------

void AddMatch::print() {
	
	cout << "Die wichtigsten Stats auf einen Blick: " << endl;
	cout << "Dein Champ: " << get_myChamp() << endl;
	cout << "Gegner    : " << get_enemyChamp() << endl;
	cout << "Du hattest FB: " << get_FB_Lane() << endl;
	cout << "Dein Farm: " << get_myFarm() << endl;
	cout << "Gegner-Farm: " << get_enemyFarm() << endl;
	cout << "Deine XP: " << get_myXP() << endl;
	cout << "Gegner-XP: " << get_enemyXP() << endl;
	cout << "Lane gewonnen: " << get_wonLane() << endl;
	cout << "Grund für Win: " << get_reasonWon() << endl;
	cout << "Grund für Lose: " << get_reasonLose() << endl;
	cout << "Playstyle: " << get_playstyle() << endl;
	cout << "Danke für die Nutzung" << endl << endl;
}