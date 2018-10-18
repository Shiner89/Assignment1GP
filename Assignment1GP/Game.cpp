#include "Game.h"




void Game::init()
{
	
	vector<GameCharacter> vpCharacters;
	//this is not working because while there is no empty constructor, the system is expecting you to have something typed in when 
	// you create the new player object, this can be done by either filling the construtor with variables or set them all in the
	// .h file of the player, enemy etc
	GameCharacter* Player1 = new Player();
	
	Player1->stats();
}

void Game::render()
{

}

void Game::update()
{

}

void Game::battle()
{

}

void Game::stats()
{

}

void Game::clean()
{

}