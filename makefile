CC = g++
CFLAGS = -g -Wall -Wextra -pedantic -std=c++17
OBJFILES = main.o gameBoard.o cell.o 
TARGET = game 

game: main.o gameBoard.o cell.o 
	g++ $(CFLAGS) main.o gameBoard.o -o game

main.o: main.cpp gameBoard.o cell.o
	$(CC) -c $(CFLAGS) main.cpp 

gameBoard.o: gameBoard.cpp 
	$(CC) -c $(CFLAGS) gameBoard.cpp

cell.o: cell.cpp 
	$(CC) -c $(CFLAGS) cell.cpp

clean:
	rm $(OBJFILES) $(TARGET)

