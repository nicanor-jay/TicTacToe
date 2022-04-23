#include "board.h"
#include <iostream>

using namespace std;
board::board() {
    for (int i = 0; i < 9; i++) {
        this->gameBoard[i] = ' ';
    }
}

void board::setBoardValue(int pos, char val) {
	this->gameBoard[pos] = val;
}

char board::getBoardValue(int pos) {
	return this->gameBoard[pos];
}

void board::printBoard() {
    int counter = 0;

    for (int i = 0; i < 3; i++) {
        cout << "+---+---+---+\n";
        
        for (int j = 0; j < 3; j++) {
            cout << "| " << this->gameBoard[counter] << " ";
            
            counter++;
        }
        cout << "|" << endl;
    }
    cout << "+---+---+---+\n";
}

