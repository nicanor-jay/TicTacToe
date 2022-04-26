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

	//Getter
	char getBoardValue(int pos[]);

	//Print game board
	void printBoard();
};

