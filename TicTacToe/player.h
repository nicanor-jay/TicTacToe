#pragma once
#include <string>

using namespace std;
class player
{
private:
	string playerName;
	char playerSymbol;
public:
	//Constructors
	player();
	player(string name, char symbol);

	//Setters
	void setPlayerName(string name);
	void setPlayerSymbol(char sym);

	//Getter
	string getPlayerName();
	char getPlayerSymbol();
};

