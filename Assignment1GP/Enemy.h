#pragma once
#ifndef ENEMY_H
#define ENEMY_H
#include "GameCharacter.h"

class Enemy : public GameCharacter
{

public:
	void spawn(string typeID, int health, int speed, int x, int y);
	virtual void update();
	int randCoordX();
	int randCoordY();


};

#endif // !ENEMY_H
