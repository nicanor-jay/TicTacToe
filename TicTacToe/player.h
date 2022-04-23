#pragma once
#include <string>

using namespace std;
class player
{
private:
	std::string name;
	char symbol;

public:
	//Constructor
	player(std::string playerName, char playerSymbol);

	//getters
	std::string getName() const;

	char getSymbol() const;
	

};

