//#include "main.h"
//#include "game.h"
#include "player.h"
#include "square.h"
#include <iostream>
//#include <vector>
#include <string>


using namespace std;
int main()
{
	square* yeet = new square('X');

	cout << yeet->getState();
}