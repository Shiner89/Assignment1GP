#pragma once
#ifndef PLAYER_H
#define PLAYER_H
#include "GameCharacter.h"

class Player: public GameCharacter
{

public:
	
	Player();
	virtual void update();
	int randCoordX();
	int randCoordY();
	int randSpeed();


};

#endif // !PLAYER_H
