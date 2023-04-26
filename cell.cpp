#include "cell.h"

Cell::Cell(int x, int y, GameBoard& currentGame) {
	this->x = x;
	this->y = y;
	this->neigborCount = 0;
	this->updateNeighbors(currentGame);
}

void Cell::updateNeighbors(GameBoard& currentGame) {
	if (currentGame.cellAt(this->x-1, this->y)) {
		this->neigborCount++;
	}

	if (currentGame.cellAt(this->x+1, this->y)) {
		this->neigborCount++;
	}

	if (currentGame.cellAt(this->x, this->y-1)) {
		this->neigborCount++;
	}

	if (currentGame.cellAt(this->x, this->y+1)) {
		this->neigborCount++;
	}

}

int Cell::getNCount() {
	return this->neigborCount;
}

int Cell::getx() {
	return this->x;
}
int Cell::gety() {
	return this->y;
}



