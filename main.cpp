#include "cell.cpp"
#include <tuple>
#include <vector>

// This function populates the initial gameboard with cells
void generateInitialCells(GameBoard* board,std::vector<Cell*> initialCells) {	
	for (size_t i = 0; i < initialCells.size(); i++) {
		Cell& c = *initialCells[i];
		int x = c.getx();
		int y = c.gety();
		board->updateboard(x, y, true);
	}
}

void checkCellN(GameBoard* board, std::vector<Cell*> liveCells) {
	for (size_t i = 0; i < liveCells.size(); i++) {
		// less than 2 neigbors means cell dies
		Cell& c = *liveCells[i];
		int ncount = c.getNCount();
		if (ncount < 2 || ncount >= 3) {
			int x, y;
			x = c.getx();
			y = c.gety();
			board->updateboard(x, y, false);
			liveCells.erase(liveCells.begin() + i);
		}


	}
}
void setInitialBounds(std::vector<Cell*> liveCells, int& leftmostX,int& rightmostX,int& lowerY,int& higherY) {
	for (size_t i = 0; i < liveCells.size(); i++) {
		int x, y;
		x = liveCells[i]->getx();
		y = liveCells[i]->gety();
		if (leftmostX > x) {
			leftmostX = x;
		}
		if (
	}
}

int main() {
	GameBoard* board = new GameBoard(75, 75);
	
	Cell* c1 = new Cell(45,45, *board);
	Cell* c2 = new Cell(45,46, *board);
	Cell* c3 = new Cell(45,44, *board);

	std::vector<Cell*> liveCells= {c1, c2, c3};
	generateInitialCells(board, liveCells);
	bool gameloop = true;
	int leftmostX, rightmostX, lowerY, higherY;
	leftmostX = lowerY = rightmostX = higherY = 0;
	
	setInitialBounds(liveCells, leftmostX, rightmostX, lowerY, higherY);
	while (gameloop) {
		if (liveCells.size() == 0) {
			gameloop = false;
		}
		checkCellN(board, liveCells);

	}
	
}

