#include "player.h"
player::player(string name, char symbol) {
	this->playerName = name;
}

string player::getPlayerName() {
	return this->playerName;
}