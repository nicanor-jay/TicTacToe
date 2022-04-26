#pragma once
class board
{
private:
	char gameBoard[3][3];

public:
	//Constructor
	board();

	//Setter
	void setBoardValue(int pos[], char val);

	//Getters
	char getBoardValue(int pos[]);
	char getBoardValue(int rowPos, int colPos);

	//Print game board
	void printBoard();
};

