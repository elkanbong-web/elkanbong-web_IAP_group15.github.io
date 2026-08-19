#pragma once
#include "entity.h"
#include <string>
#include "gameobject.h"


class enemy : public entity
{
public:
	enemy(int hp, int atk, int xpos, int ypos, char a);
	
	int gethealth();

	void sethealth(int Health);

	void movementcheck(entity** entitylist, gameobject** gameobjectlist) override;

	void Damage(entity* victim) override;

	void move() override;

	static int getenemycount();
	int getattack();
	//only one way to delete something 
	~enemy();
private:

	int attack;
	static int enemycount;
};


//if nullpointer then ignore??

//run through all 4 moves

//if nullpointer skips ??

//
