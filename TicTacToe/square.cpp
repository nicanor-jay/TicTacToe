#include "square.h"

square::square(char state)
{
	this->squareState = state;
}

void square::setState(char state)
{
	this->squareState = state;
}

char square::getState()
{
	return this->squareState;
}