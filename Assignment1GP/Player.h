#pragma once
#ifndef PLAYER_H
#define PLAYER_H
#include "GameCharacter.h"

class Player: public GameCharacter
{

public:
	
	Player(string typeID ,  int speed, int x, int y,int health);
	virtual void update();
	int randCoordX();
	int randCoordY();
	int randSpeed();


};

#endif // !PLAYER_H
