#include "Game.h"




void Game::init()
{
	
	
	/**
	this is not working because while there is no empty constructor, the system is expecting you to have something typed in when 
	you create the new player object, this can be done by either filling the construtor with variables or set them all in the
	.h file of the player, enemy etc
	**/
	//enemys assigned names to help with the comparing process
	GameCharacter* Player1 = new Player();
	GameCharacter* Enemy1 = new Enemy("Grunt Joe");
	GameCharacter* Enemy2 = new Enemy("Grunt Bob");
	GameCharacter* Enemy3 = new Enemy("Grunt Curly");
	GameCharacter* Enemy4 = new Enemy("Grunt Kevin");

	vpCharacters.push_back(Player1);
	vpCharacters.push_back(Enemy1);
	vpCharacters.push_back(Enemy2);
	vpCharacters.push_back(Enemy3);
	vpCharacters.push_back(Enemy4);

	

	for (iter = vpCharacters.begin(); iter != vpCharacters.end(); iter++)
	{
		(*iter)->stats();
		
	}

	/*
	Player1->stats();
	Enemy1->stats();
	Enemy2->stats();
	Enemy3->stats();
	Enemy4->stats();
	*/

	//make an if loop that will check all and if there positions match then change then. this will only happen once
	//this loop will be reused through the battle checking function
	cout << "Loop Chack to see if any characters match points" << endl;
	for (iter = vpCharacters.begin(); iter != vpCharacters.end(); iter++)
	{
		

		int firstX = (*iter)->returnX();
		int firstY = (*iter)->returnY();
		string charID = (*iter)->getID();
		for (iter2 = vpCharacters.begin(); iter2 != vpCharacters.end(); iter2++)
		{

			if ((*iter)->returnX() == (*iter2)->returnX() && (*iter)->returnY() == (*iter2)->returnY() && (*iter)->getID() != (*iter2)->getID())
			{
				(*iter)->coordChange();
			}

		}

	}
}

void Game::render()
{

}

void Game::update()
{
	cout << "Start of Update Loop to move all characters" << endl;

	for (iter = vpCharacters.begin(); iter != vpCharacters.end(); iter++)
	{
		(*iter)->update();
	}
}

void Game::battle()
{
	cout << "Start of Battle Chack Phase" << endl;
	for (iter = vpCharacters.begin(); iter != vpCharacters.end(); iter++)
	{
		

		
		for (iter2 = vpCharacters.begin(); iter2 != vpCharacters.end(); iter2++)
		{

			if ((*iter)->returnX() == (*iter2)->returnX() && (*iter)->returnY() == (*iter2)->returnY() && (*iter)->getID() != (*iter2)->getID())
			{
				if ((*iter)->getHealth() > (*iter2)->getHealth())
				{
					
					(*iter2)->setHealth();
				}
				else
				{
					(*iter)->setHealth();
				}
			}

		}

	}

	
}

void Game::stats()
{

}

void Game::clean()
{

}

