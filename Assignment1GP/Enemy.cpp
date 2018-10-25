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
	bool moveCheck = false;
	int change = 0;


	while (moveCheck != true)
	{
		int randMove = rand() % 4 + 1;
		cout << "value selected: " << randMove << endl;
		cout << "change is: " << change << endl;
		if (randMove == 1)
		{
			change = this->m_Y + this->m_Speed;
			if (change >= 10)
			{
				this->m_Health = this->m_Health - (this->m_Speed * 3);
				this->m_Y = this->m_Y + this->m_Speed;
				moveCheck = true;
			}
		}
		else if (randMove == 2)
		{
			change = this->m_Y - this->m_Speed;
			if (change >= 0)
			{
				this->m_Health = this->m_Health - (this->m_Speed * 3);
				this->m_Y = this->m_Y - this->m_Speed;
				moveCheck = true;
			}
			
		}
		else if (randMove == 3)
		{
			change = this->m_X + this->m_Speed;
			if (change <= 10 )
			{
				this->m_Health = this->m_Health - (this->m_Speed * 3);
				this->m_X = this->m_X + this->m_Speed;
				moveCheck = true;
			}
			
		}
		else if (randMove == 4)
		{
			change = this->m_X - this->m_Speed;
			if (change >= 0)
			{
				this->m_Health = this->m_Health - (this->m_Speed * 3);
				this->m_X = this->m_X - this->m_Speed;
				moveCheck = true;
			}
			
		}

	}
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