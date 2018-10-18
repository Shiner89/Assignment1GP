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

