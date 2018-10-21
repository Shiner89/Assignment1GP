#include "Player.h"



Player::Player()
{
	cout << "created player" << endl;
	//call function that random generates x and y within map of 10 *10
	string typeID = "Hero";
	int x= randCoordX();
	int y = randCoordY();
	int speed = randSpeed();
	int health = 170;
	spawn(typeID,health,speed, x, y);
}

void Player::update()
{
	//the user is asked what direction that the character moves.
	//if it is close to the edge it will bounce and move back the other direction
}

int Player::randCoordX()
{
	
	int randCoordx = rand() % 10;
	cout<<"X Value will be " << randCoordx << endl;
	return randCoordx;
}

int Player::randCoordY()
{
	
	int randCoordy = rand() % 10 ;
	cout << "Y Value will be " << randCoordy << endl;
	return randCoordy;
}

int Player::randSpeed()
{
	
	int randSpeed = rand() % 3 +1;
	cout << "Speed value will be: " << randSpeed << endl;
	return randSpeed;
}