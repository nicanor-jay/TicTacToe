//#include "main.h"
//#include "game.h"
//#include <vector>
#include <string>
#include <iostream>

#include "board.h"
#include "player.h"


using namespace std;
int main()
{
	board newBoard;
	string p1Name;
	string p2Name;
	int pos;

	char p1Symbol = 'X';
	char p2Symbol = 'Y';

	cout << "Enter player 1's name:\n";
	cin >> p1Name;
	cout << "Enter player 2's name:\n";
	cin >> p2Name;

	player p1(p1Name, p1Symbol);
	player p2(p2Name, p2Symbol);


	while (true) {
		newBoard.printBoard();
		cout << "Enter a position:\n";
		cin >> pos;

		newBoard.setBoardValue(pos, p1Symbol);
	}

}