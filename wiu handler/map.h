#pragma once
#include "entity.h"
#include "healthorb.h"
#include "hero.h"
#include "enemy.h"
#include "boulder.h"
#include "gameobject.h"

class map

{

public:

	gameobject** getgameobjectlist();
	entity** getentitylist();




	map();

	~map();
	void print();
	

	//this is a pointer that points to a list full of entity pointers

	//create

	//map.entity = new

	//entitylist = entity* entitylist[9] 

	//

	
private:
	entity** entitylist;
	gameobject** gameobjectlist;

	



};

