#include "player.h"

player::player() {
	this->playerName = "";
	this->playerSymbol = ' ';
}

void player::setPlayerName(string name) {
	this->playerName = name;
}
void player::setPlayerSymbol(char sym) {
	this->playerSymbol = sym;
}

string player::getPlayerName() {
	return this->playerName;
}

char player::getPlayerSymbol() {
	return this->playerSymbol;
}