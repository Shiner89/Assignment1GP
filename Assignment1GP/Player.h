#pragma once
#ifndef PLAYER_H
#define PLAYER_H
#include "GameCharacter.h"

class Player: public GameCharacter
{

public:
	void spawn(string typeID, int health, int speed, int x, int y);
	virtual void update();
	int randCoordX();
	int randCoordY();


};

#endif // !PLAYER_H
