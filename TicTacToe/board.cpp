#include "board.h"
#include <iostream>

using namespace std;
board::board() {
    int pos[2];
    for (int i = 0; i < 3; i++) {
        pos[0] = i;
        for (int j = 0; j < 3; j++) {
            pos[1] = j;
            this->setBoardValue(pos, ' ');
        }
    }
}

void board::setBoardValue(int pos[], char val) {
    
	this->gameBoard[pos[0]][pos[1]] = val;
}

char board::getBoardValue(int pos[]) {
	return this->gameBoard[pos[0]][pos[1]];
}

char board::getBoardValue(int rowPos, int colPos) {
    return this->gameBoard[rowPos][colPos];
}


void board::printBoard() {
    int counter = 0;

    for (int i = 0; i < 3; i++) {
        cout << "+---+---+---+\n";
        
        for (int j = 0; j < 3; j++) {
            cout << "| " << this->gameBoard[i][j] << " ";
            
            counter++;
        }
        cout << "|" << endl;
    }
    cout << "+---+---+---+\n";
}

