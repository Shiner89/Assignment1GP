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
	cout << "What direction would you like to move?\n 1: move UP\n 2: move DOWN\n 3: move RIGHT\n 4: move LEFT" << endl;
	int playerMove = cin.get();
	switch(playerMove)
	{
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;

	}
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