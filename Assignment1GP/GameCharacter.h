#pragma once
#ifndef GAMECHARACTER_H
#define GAMECHARACTER_H

#include <iostream>
#include <string> // used so that you can cout a string
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

class GameCharacter
{

public:
	void spawn(string typeID,int health, int speed, int x, int y);
	void render(); //print to the screen the typeID and its x and y coords
	virtual void update(); // virtual function
	void stats(); // prints all stats relating to the object
	bool isAlive(); // return true if its health is greater then 0
	int returnX();
	int returnY();
	string getID();
	void coordChange();
	int getHealth();
	void setHealth();


protected:
	string m_typeID;
	int m_Health;
	int m_Speed; // value between 1 and 3
	int m_X;
	int m_Y;

};

#endif // !GAMECHARACTER_H

