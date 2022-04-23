#include "player.h"

player::player(std::string playerName, char playerSymbol)
{
	this->name = playerName;
	this->symbol = playerSymbol;
}

std::string player::getName() const
{
	return this->name;

}

char player::getSymbol() const
{
	return this->symbol;

}