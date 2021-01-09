#include "LostFortune.h"
#include <iostream>
#include <cstdint>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
typedef unsigned int uint;

int LostFortune::loop()
{
	char playing = 'y';
	while (playing == 'y') {
		// Variable declarations
		const uint STARTING_GOLD = 1000;
		uint partySize = 0, survivors = 0, killed = UINT16_MAX;
		string leader;

		//Intro + Get Player Info
		cout << "Welcome to Lost Fortune\n" << endl;
		cout << "Please enter your adventurer's name..." << endl;
		cin >> leader;
		while (partySize < 1) {
			cout << "Enter the number of adventurers in your party..." << endl;
			cin >> partySize;
		}
		while (killed > partySize) {
			cout << "Enter the number of adventurers slain. Must be smaller than party size" << endl;
			cin >> killed;
		}
		survivors = partySize - killed;
		cout << "Initial Party Size: " << partySize << endl;
		cout << "Party Members Killed: " << killed << endl;
		cout << "Surviving Members: " << survivors << endl;
		cout << partySize << endl << killed << endl << survivors << endl;
		cout << "Play again? (y/n)" << endl;
	}
	return 0;
}
