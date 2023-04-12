#include <iostream>
#include <vector>
#include "gameboard.h"

gameBoard::gameBoard() {
	this->board = std::vector<std::vector<bool> > (25, std::vector<bool> (25, false));
}
gameBoard::gameBoard(int width, int height) {
	this->board = std::vector<std::vector<bool> > (width, std::vector<bool> (height, false));
}

void gameBoard::updateboard(int x, int y, bool cellStatus) {
	this->board[x][y] = cellStatus;
}

void gameBoard::printBoard() {
	for (size_t i = 0; i < board.size(); ++i) {
		for (size_t j = 0; j < board[i].size(); ++j) {
			if (board[i][j]) {
				std::cout<< "+";
			} else {
				std::cout<<"-";
			}
		}
		std::cout<<"\n";
	}
}

