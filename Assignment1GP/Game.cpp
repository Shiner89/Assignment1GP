#include "Game.h"




void Game::init()
{
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
	vector<GameCharacter*>::const_iterator iterClean;
	cout << "\n---------------------------------------------------------------------" << endl;
	cout << "Start of Clean Check Phase" << endl;
	for (iterClean = vpCharacters.begin(); iterClean != vpCharacters.end();)
	{
		
		
		if ((*iterClean)->isAlive() == false)
		{
			/*
			if ((*iterClean)->getID() == "Hero")
			{
				HeroCheck = false;
			}
			*/
			cout << "Removing " << (*iterClean)->getID() << " From Game cz HE DEAD" << endl;
			delete *iterClean;

			iterClean = vpCharacters.erase(iterClean);
		}
		else
		{
			iterClean++;
		}
	}
	cout << "\n---------------------------------------------------------------------" << endl;
}

