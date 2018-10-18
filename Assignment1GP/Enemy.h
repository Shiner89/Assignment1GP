#pragma once
#ifndef ENEMY_H
#define ENEMY_H
#include "GameCharacter.h"

class Enemy : public GameCharacter
{

public:
	Enemy(string typeID, int health, int speed, int x, int y);
	virtual void update();
	int randCoordX();
	int randCoordY();
	int randSpeed();


};

#endif // !ENEMY_H
