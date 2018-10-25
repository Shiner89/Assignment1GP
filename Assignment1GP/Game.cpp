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

	
	cout << "\n---------------------------------------------------------------------" << endl;
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
	

	cout << "\n---------------------------------------------------------------------" << endl;
}

void Game::render()
{
	cout << "\n---------------------------------------------------------------------" << endl;
	cout << "Start of Render Loop to State all characters pos" << endl;

	for (iter = vpCharacters.begin(); iter != vpCharacters.end(); iter++)
	{
		(*iter)->render();
	}
	cout << "\n---------------------------------------------------------------------" << endl;
}

void Game::update()
{
	cout << "\n---------------------------------------------------------------------" << endl;
	cout << "Start of Update Loop to move all characters" << endl;

	for (iter = vpCharacters.begin(); iter != vpCharacters.end(); iter++)
	{
		(*iter)->update();
	}
	cout << "\n---------------------------------------------------------------------" << endl;
}

void Game::battle()
{
	cout << "\n---------------------------------------------------------------------" << endl;
	cout << "Start of Battle Chack Phase" << endl;
	for (iter = vpCharacters.begin(); iter != vpCharacters.end(); iter++)
	{
		

		
		for (iter2 = vpCharacters.begin(); iter2 != vpCharacters.end(); iter2++)
		{

			if ((*iter)->returnX() == (*iter2)->returnX() && (*iter)->returnY() == (*iter2)->returnY() && (*iter)->getID() != (*iter2)->getID())
			{
				cout << "Battle happend between" << (*iter)->getID() << " and " << (*iter2)->getID() << endl;
				if ((*iter)->getHealth() > (*iter2)->getHealth())
				{
					cout << (*iter)->getID() << " has won" << endl;
					(*iter2)->setHealth();
				}
				else
				{
					cout << (*iter2)->getID() << " has won" << endl;
					(*iter)->setHealth();
				}
			}

		}

	}

	cout << "\n---------------------------------------------------------------------" << endl;
}

void Game::stats()
{
	cout << "\n---------------------------------------------------------------------" << endl;
	cout << "Start of Stats Phase" << endl;
	for (iter = vpCharacters.begin(); iter != vpCharacters.end(); iter++)
	{
		(*iter)->stats();
	}

	cout << "\n---------------------------------------------------------------------" << endl;
}

void Game::clean()
{
	cout << "\n---------------------------------------------------------------------" << endl;
	cout << "Start of Clean Check Phase" << endl;
	for (iterClean = vpCharacters.begin(); iterClean != vpCharacters.end(); iterClean++)
	{
		
		
		if ((*iterClean)->isAlive() == false)
		{
			cout << "Removing " << (*iterClean)->getID() << " From Game cz HE DEAD" << endl;
			delete *iterClean;
			
			iterClean = vpCharacters.erase(iterClean);
		}
	}
	cout << "\n---------------------------------------------------------------------" << endl;
}

