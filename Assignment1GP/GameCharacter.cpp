#include "GameCharacter.h"
#include <iostream>


void GameCharacter::spawn(string typeID, int health, int speed, int x, int y)
{
	m_typeID = typeID;
	m_Health = health;
	m_Speed = speed;
	m_X = x;
	m_Y = y;

}

void GameCharacter::render()
{
	cout << "------------CALLING RENDER FUNCTION------------" << endl;
	cout << "TypeID: " << m_typeID << endl;
	cout << "X and Y coords are: " << m_X << "," << m_Y << endl;
	
}

void GameCharacter::stats()
{
	
	cout << "TypeID: " << m_typeID << endl;
	cout << "Health: " << m_Health << endl;
	cout << "Speed: " << m_Speed << endl;
	cout << "X and Y coords are: " << m_X << "," << m_Y << endl;
}
void GameCharacter::update()
{

}


bool GameCharacter::isAlive()
{
	if (m_Health > 0)
	{
		return true ;
	}
	else
	{
		return false;
	}
}
string GameCharacter::getID()
{
	return m_typeID;
}

int GameCharacter::returnX()
{
	return m_X;
}

int GameCharacter::returnY()
{
	return m_Y;
}

void GameCharacter::coordChange()
{
	int randCoordx = rand() % 10;
	cout << "new X Value will be " << randCoordx << endl;
	int randCoordy = rand() % 10;
	cout << "new Y Value will be " << randCoordy << endl;
	m_X = randCoordx;
	m_Y = randCoordy;
}
int GameCharacter::getHealth()
{
	return m_Health;
}
void GameCharacter::getHealth()
{
	m_Health = 0;
}