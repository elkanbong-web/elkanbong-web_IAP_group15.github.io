#include "map.h"
#include <iostream>



//

gameobject** map::getgameobjectlist()
{
	return gameobjectlist;
}

//make a whole function for rendering
entity** map::getentitylist() {
	return entitylist;
}





//this makes everything its just poorly named
map::map()
{

	srand((unsigned int)time(0));

	entitylist = new entity*[4]; //SAME HERE 
	//1 HERO 
	//3 GOBLINS

	gameobjectlist = new gameobject* [3]; //CHANGE GAMEOBJECT LIST TO HOWEVER YOU LIKE
	//THIS CONTAINS LIKE 1 boulder

	//assumed wall list goes here 
	std::string character;
	std::cout << "Start?";
	std::cin >> character;
	int range = 0;
	int attack = 0;
	int health = 0;


	if (character == "y" || character == "n") {
		std::cout << "you have selected flowery";
		health = 999;
		attack = 999;
		range = 1;

	}

	//void hero::spawn(int hp, int atk, int xpos, int ypos, char a, int rng)
	hero* player = new hero(health, attack, 0, 0, 'P', range , 1);
	entitylist[0] = player;

	//out of the 7 objects 4 have been created
	for (int i = 1; i < 4; i++) {
		enemy* goblin = new enemy(20, 5, rand() % 15, rand() % 15, 'G');
		entitylist[i] = goblin;
		//enemy(int hp, int atk, int xpos, int ypos, char a);
	}


	//ORIGNAL CLASS CONSTRUCTOR AREA FOR OBJECTS

	for (int i = 0; i < 2; i++) {
	
	//	healthorb* healthglobe = new healthorb( rand() % 10, rand() % 10,'E');
	
		gameobjectlist[i] = nullptr;
	
	}

	boulder* item = new boulder(rand() % 15, rand() % 15, 'O');

	gameobjectlist[2] = item;


	//loops through everything once to check if sm guy acting sussy and suspicuous


	// Entity vs Entity (self-check with i != u)
	for (int i = 0; i < 4; i++) {
		for (int u = 0; u < 4; u++) {
			if (i != u) {
				if (entitylist[i]->getx() == entitylist[u]->getx() &&
					entitylist[i]->gety() == entitylist[u]->gety())
				{
					entitylist[i]->setxy(rand() % 15, rand() % 15);
				}
			}
		}
	}

	//// Entity vs GameObject (no self-check needed — different arrays, never the same object)
	//for (int i = 0; i < 4; i++) {
	//	for (int u = 0; u < 3; u++) {
	//		if (entitylist[i]->getx() == gameobjectlist[u]->getx() &&
	//			entitylist[i]->gety() == gameobjectlist[u]->gety())
	//		{
	//			entitylist[i]->setxy(rand() % 10, rand() % 10);
	//		}
	//	}
	//}

	//// GameObject vs GameObject (self-check with i != u)
	//for (int i = 0; i < 3; i++) {
	//	for (int u = 0; u < 3; u++) {
	//		if (i != u) {
	//			if (gameobjectlist[i]->getx() == gameobjectlist[u]->getx() &&
	//				gameobjectlist[i]->gety() == gameobjectlist[u]->gety())
	//			{
	//				gameobjectlist[i]->setxy(rand() % 10, rand() % 10);
	//			}
	//		}
	//	}
	//}

	//// GameObject vs Entity (no self-check needed — different arrays)
	//for (int i = 0; i < 3; i++) {
	//	for (int u = 0; u < 4; u++) {
	//		if (gameobjectlist[i]->getx() == entitylist[u]->getx() &&
	//			gameobjectlist[i]->gety() == entitylist[u]->gety())
	//		{
	//			gameobjectlist[i]->setxy(rand() % 10, rand() % 10);
	//		}
	//	}
	//}

	//healthorb(int a, int xpos, int ypos, char a);
	// 
	// 
	// 
	//generate the 2 health globe
	
}

//player icon //player y //player x

//it should take in my entity list


//now i need to loop thru entity list 

//how tf does one do that 

map::~map()
{
}


void map::print()
{

	//this initialises every part of the array first by filling everything in [10][10] with dots 
	//if this is changed replace the 10s in the foreloop here



	char map[15][15];//lol

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			map[i][j] = ' ';
		}
	}
	//hello just read me i explain
//this gets sets the x then sets the y followed by getting the icon repeats
	for (int i = 0; i < 4; i++) {
		if (!(entitylist[i] == nullptr)) {
			map[entitylist[i]->gety()][entitylist[i]->getx()] = entitylist[i]->geticon();
		}

	}

	//hello just read me i explain
	//this gets sets the x then sets the y followed by getting the icon repeats





	//temp disable 
	// 
	// 
	for (int i = 0; i < 3; i++) {
		if (!(gameobjectlist[i] == nullptr)) {
			map[gameobjectlist[i]->gety()][gameobjectlist[i]->getx()] = gameobjectlist[i]->geticon();
		}
	}



		//if your adding a newlist aka me(jayden)
		//for (int i = 0; i < 3; i++) {
		//	if (!(YOURLIST[i] == nullptr)) { //basically if the object ur printing does not exist it does not print

		//		map[gameobjectlist[i]->gety()][gameobjectlist[i]->getx()] = gameobjectlist[i]->geticon();
		//	}
		//}


		// i get the full map and print out everything 

	for (int i = 0; i < 15; i++) {
	}
	
		for (int i = 0; i < 15; i++) {
			std::cout << std::endl;
			std::cout << '|';
			for (int j = 0; j < 15; j++) {
				std::cout << map[i][j];

			}
			std::cout << '|';
		}
	}




	
	//creation of dots



		









