#include "game.h"
#include <string>
#include <iostream>

using namespace std;
game::game() {
	setInfo();

	//Game Loop
	gameLoop();

	//Check For Win
}

void game::setInfo() {
	string player1Name;
	string player2Name;
	char player1Symbol;
	char player2Symbol;

	cout << "Enter player 1's name:\n";
	cin >> player1Name;
	cout << "Enter player 1's symbol:\n";
	cin >> player1Symbol;
	cout << "Enter player 2's name:\n";
	cin >> player2Name;
	cout << "Enter player 2's symbol:\n";
	cin >> player2Symbol;

	this->p1.setPlayerName(player1Name);
	this->p1.setPlayerSymbol(player1Symbol);
	this->p2.setPlayerName(player2Name);
	this->p2.setPlayerSymbol(player2Symbol);

	this->playerHasWon = false;
	this->whoseTurn = true;
}

void game::gameLoop() {
	while (!this->playerHasWon) {
		int pos, rowPos, colPos;
		int rowColPos[2];

		this->gameBoard.printBoard();
		cout << "Enter a position (Starts at 0!):\n";
		cin >> pos;

		//CONVERT POS TO ROWPOS AND COLPOS
		rowColPos[0] = pos / 3;
		rowColPos[1] = pos % 3;

		if (whoseTurn) {
			this->gameBoard.setBoardValue(rowColPos, this->p1.getPlayerSymbol());
		}
		else {
			this->gameBoard.setBoardValue(rowColPos, this->p2.getPlayerSymbol());
		}
		
		this->whoseTurn = !whoseTurn;
	}
}

bool game::checkForWin(int pos) {

	//Check Horizontal
	return true;

	//Check Vertical

	//Check Diagonal

}