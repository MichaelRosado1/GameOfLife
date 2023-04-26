#include <iostream>
#include <vector>
#include "gameboard.h"

GameBoard::GameBoard() {
	this->board = std::vector<std::vector<bool> > (25, std::vector<bool> (25, false));
}
GameBoard::GameBoard(int width, int height) {
	this->board = std::vector<std::vector<bool> > (width, std::vector<bool> (height, false));
}

void GameBoard::updateboard(int x, int y, bool cellStatus) {
	this->board[x][y] = cellStatus;
}

void GameBoard::printBoard() {
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

bool GameBoard::cellAt(int x, int y) {
	if (x < 0 && x > this->board.size() - 1) {
		printf("cellAt() received x out of bounds");
		return false;	
	}

	if (y < 0 && y > this->board[0].size() - 1) {
		printf("cellAt() received y out of bounds");
		return false;
	}
	if (this->board[x][y]) {
		return true;
	}
	return false;
}
