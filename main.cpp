#include <conio.h>
#include <string>
#include <iostream>
#include "map.h"
#include "hero.h"
#include "entity.h"



//destructor 

//



//please delete before code revie

int main(void) {



	//if this can run then its perfect already
	map world;
	//map printing


	int num = 0;
	char input = 'a';

	//so this is how it works the first number is the Y position and the X is the second
	//-> (*...).getfunc

	//lowkey just store all the positions here
	
	//map gets all cordinates of everything 
	//after everything moves???

	//world.mapx(

	//enemies into 

	//enemies[3]

	//forloop [3]

while (enemy::getenemycount() > 0 && world.getentitylist()[0] != nullptr) {
	//map rendering
	system("cls");
	world.print();
	std::cout << std::endl;



	std::cout << std::endl;
	
	if (!(world.getentitylist()[0] == nullptr)) {
		std::cout << "you have" << world.getentitylist()[0]->gethealth() << "hp left";
	}

	//rebuild the map each time
 	for (int i = 0; i < 4; i++) {
		if (world.getentitylist()[i] == nullptr) {
			continue;
		}
		world.getentitylist()[i]->movementcheck(world.getentitylist(), world.getgameobjectlist());
		
	}

		}
if (world.getentitylist()[0] == nullptr) {
	std::cout << "you lost";
	std::cout << std::endl;
}
else {
	std::cout << std::endl;
	std::cout << "you won!";
	std::cout << std::endl;
}



		return 0;

		
	}
	
		



//movex
