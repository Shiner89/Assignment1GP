#include "Game.h"


int main()
{
	srand(time(NULL));
	Game* GameMode = new Game();
	GameMode->init();
	cin.get();
}