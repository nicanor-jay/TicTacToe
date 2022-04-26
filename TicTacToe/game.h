#pragma once
#include "board.h"
#include "player.h"

class game
{
private:
	player p1;
	player p2;

	board gameBoard;
	bool playerHasWon;
	
	//int player1Score;
	//int player2Score;

	bool whoseTurn;

public:
	//Constructor
	game();

	//Initial Setter
	void setInfo();

	//Game Loop
	void gameLoop();

	//Win Condition Check;
	bool checkForWin(int pos);

};

