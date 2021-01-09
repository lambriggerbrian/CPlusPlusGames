#pragma once

namespace TicTacToe {
	typedef char Board[3][3];
	typedef int Position[2];
	typedef Position Line[3];

	class TicTacToeGame
	{
	public:
		static int loop();
	private:
		static void playTurn(Board board);
		static const void printBoard(const Board board);
		static const bool checkLine(const Board board, const Line line, const char symbol);
		static const Position NONE;
		static const Line ROWS[3];
		static const Line COLUMNS[3];
		static const Line DIAGONALS[2];
		static const Position DIAGONAL_SPACES[5];
	};
}
