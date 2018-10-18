#include "Enemy.h"

Enemy::Enemy(string typeID, int health, int speed, int x, int y)
{
	cout << "created player" << endl;
	//call function that random generates x and y within map of 10 *10
	typeID = "Enemy";
	x = randCoordX();
	y = randCoordY();
	speed = randSpeed();
	spawn(typeID, speed, x, y, health);
}

void Enemy::update()
{

}

int Enemy::randCoordX()
{
	srand(time(NULL));
	int randCoord = rand() % 10;
	cout << "X Value will be " << randCoord << endl;
	return randCoord;
}

int Enemy::randCoordY()
{
	srand(time(NULL));
	int randCoord = rand() % 10;
	cout << "Y Value will be " << randCoord << endl;
	return randCoord;
}

int Enemy::randSpeed()
{
	srand(time(NULL));
	int randSpeed = (rand() % 3 )+1;
	cout << "Speed value will be: " << randSpeed << endl;
	return randSpeed;
}