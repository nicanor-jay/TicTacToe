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

	this->whoseTurn = true;
}

void game::gameLoop() {
	while (true) {
		int pos;

		this->gameBoard.printBoard();
		cout << "Enter a position (Starts at 0!):\n";
		cin >> pos;

		if (whoseTurn) {
			this->gameBoard.setBoardValue(pos, this->p1.getPlayerSymbol());
		}
		else {
			this->gameBoard.setBoardValue(pos, this->p2.getPlayerSymbol());
		}
		
		this->whoseTurn = !whoseTurn;
	}
}

bool game::checkForWin() {

}