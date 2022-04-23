#pragma once
#include <string>

using namespace std;
class player
{
private:
	string playerName;
	char playerSymbol;
public:
	//Constructor
	player(string name, char symbol);

	//Getter
	string getPlayerName();
};

