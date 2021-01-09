#include "TicTacToe.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using namespace TicTacToe;

int TicTacToeGame::loop()
{
	char playing = 'y';
	while (playing == 'y') {
		bool complete = false;
		while (!complete) {
			bool playerFirst = false;
			Board board = {
			{' ', ' ', ' '},
			{' ', ' ', ' '},
			{' ', ' ', ' '}
			};
			cout << "Let's Play Tic-Tac-Toe!" << endl;
			if (playerFirst) cout << "You go first." << endl;
			else cout << "I'll go first." << endl;
			printBoard(board);
			// TODO: GAMEPLAY
			complete = true;
		}
		cout << "Play again? (y/n)" << endl;
		cin >> playing;
	}
	return 0;
}

void TicTacToeGame::playTurn(Board board)
{
	// Check if potentially winning moves

	// Check if opponent winning moves

	// Check if line to continue

	// Play random
}

const void TicTacToeGame::printBoard(const Board board)
{
	const char* rowTemplate = "| %c | %c | %c |\n";
	string line = " ----------- ";
	cout << line << endl;
	for (int i = 0; i < 3; i++) {
		printf(rowTemplate, board[i][0], board[i][1], board[i][2]);
		cout << line << endl;
	}
}

const bool TicTacToeGame::checkLine(const Board board, const Line line, const char symbol)
{
	int counter = 0;
	for (int i = 0; i < 3; i++) {
		int x = line[i][0], y = line[i][1];
		if (board[x][y] == symbol) counter++;
	}
	if (counter == 3) return true;
	else return false;
}

const Line TicTacToeGame::ROWS[3] = {
	{ {0,0},{0,1},{0,2} },
	{ {1,0},{1,1},{1,2} },
	{ {2,0},{2,1},{2,2} }
};

const Line TicTacToeGame::COLUMNS[3] = {
	{{0,0},{1,0},{2,0}},
	{{0,1},{1,1},{2,1}},
	{{0,2},{1,2},{2,2}}
};

const Line TicTacToeGame::DIAGONALS[2] = {
	{{0,0},{1,1},{2,2}},
	{{0,2},{1,1},{2,0}}
};

const Position TicTacToeGame::DIAGONAL_SPACES[5] = {
	{0,0},{0,2},{1,1},{2,0},{2,2}
};
