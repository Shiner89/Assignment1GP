#include "Game.h"


int main()
{
	srand(time(NULL));
	Game* GameMode = new Game();
	GameMode->init();

	for (int i = 0; i < 20; i++)
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