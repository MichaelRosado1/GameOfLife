#include <iostream>
#include <vector>

class GameBoard {
	public:
		GameBoard();
		GameBoard(int width, int height); 
		void printBoard();
		void updateboard(int x, int y, bool cellStatus);
		bool cellAt(int x, int y);
	private:
		std::vector<std::vector<bool> > board;
};
