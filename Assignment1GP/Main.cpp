#include "Game.h"


int main()
{
	srand(time(NULL));
	Game* GameMode = new Game();
	GameMode->init();
	bool HeroCheck = true;
	//this is to go in the for loop once i know how to change it in other classes and functions :    || HeroCheck != true
	for (int i = 0; i < 20; i++ )
	{
		GameMode->render();
			GameMode->update();
			GameMode->battle();
			GameMode->stats();
			GameMode->clean();
		
		
	}

	GameMode->stats();
	cin.get();
}