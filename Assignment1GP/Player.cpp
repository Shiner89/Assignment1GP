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
	bool moveCheck = false;
	int playerMove;
	int change;

	while (moveCheck != true)
	{
		cout << "What direction would you like to move?\n 1: move UP\n 2: move DOWN\n 3: move RIGHT\n 4: move LEFT" << endl;
		cin >> playerMove;
		cout << "you have selected: " << playerMove << endl;

		if (playerMove == 1)
		{
			change = this->m_Y + this->m_Speed;
			if (change > 10)
			{
				this->m_Health = this->m_Health - (this->m_Speed * 2);
				this->m_Y = 10;
				moveCheck = true;
				cout << "You hit a wall, turn back!!" << endl;
			}
			else
			{
				this->m_Health = this->m_Health - (this->m_Speed * 2);
				this->m_Y = this->m_Y + this->m_Speed;
				moveCheck = true;
			}
		}
		else if (playerMove == 2)
		{
			change = this->m_Y - this->m_Speed;
			if (change < 0)
			{
				this->m_Health = this->m_Health - (this->m_Speed * 2);
				this->m_Y = 0;
				moveCheck = true;
				cout << "You hit a wall, turn back!!" << endl;
			}
			else
			{
				this->m_Health = this->m_Health - (this->m_Speed * 2);
				this->m_Y = this->m_Y - this->m_Speed;
				moveCheck = true;
			}
		}
		else if (playerMove == 3)
		{
			change = this->m_X + this->m_Speed;
			if (change > 10)
			{
				this->m_Health = this->m_Health - (this->m_Speed * 2);
				this->m_X = 10;
				moveCheck = true;
				cout << "You hit a wall, turn back!!" << endl;
			}
			else
			{
				this->m_Health = this->m_Health - (this->m_Speed * 2);
				this->m_X = this->m_X + this->m_Speed;
				moveCheck = true;
			}
		}
		else if (playerMove == 4)
		{
			change = this->m_X - this->m_Speed;
			if (change < 0)
			{
				this->m_Health = this->m_Health - (this->m_Speed * 2);
				this->m_X = 0;
				moveCheck = true;
				cout << "You hit a wall, turn back!!" << endl;
			}
			else
			{
				this->m_Health = this->m_Health - (this->m_Speed * 2);
				this->m_X = this->m_X - this->m_Speed;
				moveCheck = true;
			}
		}
		else
		{
			cout << "-------------------Incorrect Input Try Again-------------------" << endl;
		}
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