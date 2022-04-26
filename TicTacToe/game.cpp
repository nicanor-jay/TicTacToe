#include "game.h"
#include <string>
#include <iostream>
#include <stdio.h>
#include <ctype.h>

using namespace std;
game::game() {
	cout << "Welcome to TicTacToe!\n";

	setInfo();
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
	this->turnCounter = 0;
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

		while (gameBoard.getBoardValue(rowColPos)!= ' ') {
			cout << "Position invalid. Please try again:\n";
			cin >> pos;

			rowColPos[0] = pos / 3;
			rowColPos[1] = pos % 3;
		}

		if (whoseTurn) {
			this->gameBoard.setBoardValue(rowColPos, this->p1.getPlayerSymbol());
		}
		else {
			this->gameBoard.setBoardValue(rowColPos, this->p2.getPlayerSymbol());
		}


		if (checkForWin(rowColPos)) {
			this->gameBoard.printBoard();
			if (whoseTurn) {
				cout << p1.getPlayerName() << " has won!\n";
			}
			else {
				cout << p2.getPlayerName() << " has won!\n";
			}
			
			break;
		}
		turnCounter++;
		cout << "TURN: " << turnCounter << endl;

		if (turnCounter == 9) {
			this->gameBoard.printBoard();
			cout << "The match is a TIE!\n";
			break;
		}
		
		this->whoseTurn = !whoseTurn;
	}
}

bool game::checkForWin(int pos[]) {
	char currChar = gameBoard.getBoardValue(pos);
	int rowPos = pos[0];
	int colPos = pos[1];

	//Check Horizontal
	for (int i = 0; i < 3; i++) {
		if (gameBoard.getBoardValue(rowPos,i) != currChar && gameBoard.getBoardValue(rowPos, colPos) != ' ') {
			break;
		}
		if (i == 3 - 1) {
			return true;
		}
	}

	//Check Vertical
	for (int i = 0; i < 3; i++) {
		if (gameBoard.getBoardValue(i, colPos) != currChar && gameBoard.getBoardValue(rowPos, colPos) != ' ') {
			break;
		}
		if (i == 3 - 1) {
			return true;
		}
	}

	//Check Diagonal
	if (rowPos == colPos) {
		//we're on a diagonal
		for (int i = 0; i < 3; i++) {
			if (gameBoard.getBoardValue(i, i) != currChar) {
				break;
			}
			if (i == 3 - 1) {
				return true;
			}
		}
	}

	//Check Anti-Diagonal
	if (rowPos + colPos == 3 - 1) {
		for (int i = 0; i < 3; i++) {
			if (gameBoard.getBoardValue(i,(3 - 1) - i) != currChar)
				break;
			if (i == 3 - 1) {
				return true;
			}
		}
	}

	return false;

}