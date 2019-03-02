#pragma once
#ifndef _ADDMATCH_H_
#define _ADDMATCH_H_
#include <string>
#include "KDA.h"


class AddMatch {
private:
	// -------------------------------------- data of class --------------------------------------

	KDA myKDA, enemyKDA;
	int myChamp, enemyChamp;
	bool FB_Lane;									// who got the first kill
	int my_Farm, enemy_Farm;
	float my_XP, enemy_XP;
	bool won_lane;
	int reason_win, reason_lose;				// Numbers are defined for each case (like win || lose) , e.g. 1 is EZ STOMP, 2 is 2v8 etc.
	int playstyle;							// same here

public:
	// -------------------------------------- declaration of (standart) constructors --------------------------------------

	/* AddMatch() :AddMatch(0, 0, false, 0, 0, 0.0f, 0.0f, false, 0, 0, 0) {};
	AddMatch( int, int, bool, int, int, float, float, bool, int, int, int);*/

	AddMatch();

	//hopefully this will be enough, since we will only use the standart constructor on shape start, then use the elementals to configure the stats


	// -------------------------------------- elemental functions --------------------------------------

	void set_myKDA(int blow, int rip, int ksed);
	void set_enemyKDA(int blow, int rip, int ksed);
	void set_myChamp(int iChamp);			// {myChamp = iChamp; } ;
	void set_enemyChamp(int eChamp);		// { enemyChamp = eChamp;} ;
	void set_FB_Lane_true();				// { FB_Lane = true; };
	void set_FB_Lane_false();				// { FB_Lane = false; };
	void set_myFarm(int mF);				// { my_Farm = mF; };
	void set_enemyFarm(int eF);				// { enemy_Farm = eF; };
	void set_myXP(float iXP);				// { my_XP = mXP; };
	void set_enemyXP(float eXP);			// { enemy_XP = eXP; };
	void set_wonLane();						// { won_lane = true; };
	void set_lostLane();					// { won_lane = false; };
	void set_reasonWon(int rWin);			// { reason_win = reason; };
	void set_reasonLose(int rLose);			// { reason_lose = reason; };
	void set_playstyle(int play);			// { playstyle = play; };

	int get_myKDA();
	int get_enemyKDA();
	int get_myChamp();		// { return myChamp; };
	int get_enemyChamp();	// { return enemyChamp; };
	bool get_FB_Lane();		// { return FB_Lane;  };
	int get_myFarm();		// { return my_Farm;  };
	int get_enemyFarm();	// { return enemy_Farm; };
	float get_myXP();		// { return my_XP; };
	float get_enemyXP();	// { return enemy_XP; };
	bool get_wonLane();		// { return won_lane; };
	int get_reasonWon();	// { return reason_win; };
	int get_reasonLose();	// { return reason_lose; };
	int get_playstyle();	// { return playstyle; };

	void print();	// for testing
	friend class KDA;
};
#endif