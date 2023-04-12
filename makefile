CC = g++
CFLAGS = -g -Wall -Wextra -pedantic 
OBJFILES = main.o gameBoard.o 
TARGET = game 

game: main.o gameBoard.o 
	g++ $(CFLAGS) main.o gameBoard.o -o game

main.o: main.cpp 
	$(CC) -c $(CFLAGS) main.cpp 

gameBoard.o: gameBoard.cpp 
	$(CC) -c $(CFLAGS) gameBoard.cpp

clean:
	rm $(OBJFILES) $(TARGET)

