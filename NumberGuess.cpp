#include "NumberGuess.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int NumberGuess::chooseNumber() {
	srand(static_cast<unsigned int>(time(0)));
	unsigned int random = rand();
	return (random % 100) + 1;
}

int NumberGuess::loop()
{
	char playing = 'y';
	while (playing == 'y') {
		cout << "I'm thinking of a number";
		for (int i = 0; i < 3; i++) {
			cout << '.';
		}
		int number = chooseNumber();
		cout << endl << "Guess the Number!" << endl;
		int guess = 101;
		while (guess != number) {
			cin >> guess;
			int diff = number - guess;
			if (diff == 0) cout << "You got it!" << endl;
			else if (diff > 0) cout << "Guess higher!" << endl;
			else cout << "Guess lower!" << endl;
		}
		cout << "Play again? (y/n)" << endl;
		cin >> playing;
	}
	return 0;
}
