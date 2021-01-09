#pragma once

#include "TicTacToe.h"

namespace TicTacToe {
	class ITicTacToeAI {
	public:
		virtual int* makeChoice(Board board, const char symbol) = 0;

	protected:
	};
}
