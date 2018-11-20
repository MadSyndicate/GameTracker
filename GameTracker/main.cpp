
//

#include <iostream>
#include "match.h"
using namespace std;

int test_reason = 0;
char anwser;

int main(void)
{
	cout << "Hello guys, welcome to the test realm" << endl;
	AddMatch Game{};
	test_reason = Game.get_myChamp();
	cout << test_reason;
	cout << "So currently ur playing Annie" << endl;
	cout << "and now it should turn to Alistar" << endl;
	Game.set_myChamp(4);
	cout << test_reason << endl;
	cout << "and, did it work?" << endl << endl;
	cin >> anwser;
	return 0;
}

// Programm ausführen: STRG+F5 oder "Debuggen" > Menü "Ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
