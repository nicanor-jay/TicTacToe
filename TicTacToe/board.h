#pragma once
class board
{
private:
	char gameBoard[9]; 

public:
	//Constructor
	board();

	//Setter
	void setBoardValue(int pos, char val);

	//Getter
	char getBoardValue(int pos);

	//Print game board
	void printBoard();
};

