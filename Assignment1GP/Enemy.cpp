#include "Enemy.h"

Enemy::Enemy(string typeID)
{
	cout << "created Enemy" << endl;
	//call function that random generates x and y within map of 10 *10
	
	int x = randCoordX();
	int y = randCoordY();
	int speed = randSpeed();
	int health = 170;
	spawn(typeID,health,speed, x, y);
}

void Enemy::update()
{
	//this will hold a random number 0-3 that decides the direction that the character moves.
	//if it is close to the edge it will bounce and move back the other direction
}

int Enemy::randCoordX()
{
	
	int randCoordx = rand() % 10;
	cout << "X Value will be " << randCoordx << endl;
	return randCoordx;
}

int Enemy::randCoordY()
{
	
	int randCoordy = rand() % 10;
	cout << "Y Value will be " << randCoordy << endl;
	return randCoordy;
}

int Enemy::randSpeed()
{
	
	int randSpeed = rand() % 3 +1;
	cout << "Speed value will be: " << randSpeed << endl;
	return randSpeed;
}