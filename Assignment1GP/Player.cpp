#include "Player.h"



Player::Player(string typeID, int speed, int x, int y, int health )
{
	cout << "created player" << endl;
	//call function that random generates x and y within map of 10 *10
	typeID = "Hero";
	x= randCoordX();
	y = randCoordY();
	speed = randSpeed();
	spawn(typeID,speed, x, y,health);
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

int Player::randSpeed()
{
	srand(time(NULL));
	int randSpeed = rand() % 10;
	cout << "Speed value will be: " << randSpeed << endl;
	return randSpeed;
}