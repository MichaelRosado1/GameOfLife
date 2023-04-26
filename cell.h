#include <vector>
#include "gameboard.h"

class Cell {
	public:
		Cell(int x, int y, GameBoard& currentGame);
		void updateNeighbors(GameBoard& currentGame);
		int getNCount();
		int getx();
		int gety();
		
	private:
		int x, y;
		int neigborCount;
};

