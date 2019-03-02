#include <iostream>
#include <string>
#include "match.h"
#include "KDA.h"
using namespace std;

int test_reason;
bool test_FB;
string anwser;

int main(void)
{
	cout << "Hello guys, welcome to the test realm" << endl;
	
	AddMatch Game{};
	KDA FirstGame{};

	FirstGame.print_KDA();
	Game.print();
	
	cout << "And now we change some things :)" << endl;
	
	Game.set_myChamp(56);
	Game.set_enemyChamp(12);
	Game.set_FB_Lane_true();
	Game.set_wonLane();
	Game.set_reasonWon(1);
	FirstGame.set_kills(7);
	FirstGame.set_deaths(10);
	FirstGame.set_assist(4);

	FirstGame.print_KDA();
	Game.print();			//changes baby

	cout << "And? Was it good?" << endl;
	cin >> anwser;

	return 0;
}

// Programm ausf�hren: STRG+F5 oder "Debuggen" > Men� "Ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Men� "Debuggen starten"

// Tipps f�r den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzuf�gen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzuf�gen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzuf�gen", um dem Projekt vorhandene Codedateien hinzuzuf�gen.
//   6. Um dieses Projekt sp�ter erneut zu �ffnen, wechseln Sie zu "Datei" > "�ffnen" > "Projekt", und w�hlen Sie die SLN-Datei aus.
