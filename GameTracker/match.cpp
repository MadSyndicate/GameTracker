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

int AddMatch::get_myChamp() {
	return myChamp;
}