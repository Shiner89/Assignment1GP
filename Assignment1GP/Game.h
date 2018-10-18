#pragma once
#ifndef GAME_H
#define GAME_H
#include "GameCharacter.h"
#include "Player.h"
#include "Enemy.h"
#include <vector>

class Game
{
public:
	void init();//create the objects and place in vector as pointers
	void render();//cycle through vector and call the render function
	void update();//cycle through vector and call the update func
	void battle();//check coords of all objects and make them fight if on same space
	void stats();//cycle and print all stats
	void clean();//cycle and delete any who have 0 health
};
#endif // !GAME_H
