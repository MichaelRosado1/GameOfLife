#include <iostream>
#include <vector>

class gameBoard {
	public:
		gameBoard();
		gameBoard(int width, int height); 
		void printBoard();
		void updateboard(int x, int y, bool cellStatus);
	private:
		std::vector<std::vector<bool> > board;
};
