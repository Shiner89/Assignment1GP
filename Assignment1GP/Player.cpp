#include "Player.h"

void Player::spawn(string typeID, int health, int speed, int x, int y)
{
	m_typeID = typeID;
	m_Health = 200;
	m_Speed = speed;
	//call function that random generates x and y within map of 10 *10
	m_X= randCoordX();
	m_Y = randCoordY();
}

void Player::update()
{

}

int Player::randCoordX()
{
	srand(time(NULL));
	int randCoord = rand() % 10;
	cout<<"X Value will be " << randCoord << endl;
	return randCoord;
}

int Player::randCoordY()
{
	srand(time(NULL));
	int randCoord = rand() % 10;
	cout << "Y Value will be " << randCoord << endl;
	return randCoord;
}