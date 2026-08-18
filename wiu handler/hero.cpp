#include "hero.h"
#include "map.h"
#include "boulder.h"
#include <iostream>
#include <conio.h>
hero::hero(int hp, int atk, int xpos, int ypos, char a, int rng, bool Status)
{
	health = hp;
	attack = atk;
	coordinates.Placey(ypos);
		coordinates.Placex(xpos);
	icon = a;
	range = rng;
	status = Status;

}

void hero::move()
{
	return;
}


void hero::Damage(entity* victim)
{
	victim->sethealth(victim->gethealth() - getattack());
}



void hero::movementcheck(entity** entitylist, gameobject** gameobjectlist)
{
	entity* target = nullptr;
	for (int u = 0; u < 4; u++) {
		if (u != 0 && entitylist[u] != nullptr) {
			int dx = std::abs(getx() - entitylist[u]->getx());
			int dy = std::abs(gety() - entitylist[u]->gety());
			bool isInRange = (dx <= getrange() && dy == 0) || (dx == 0 && dy <= getrange());
			if (isInRange) {
				target = entitylist[u];
				break;
			}
		}
	}
	if (target != nullptr) {
	
		std::cout << std::endl;
		std::cout << "A goblin is in range! Attack? (y/n): ";
		char choice =_getch();
		if (choice == 'y' || choice == 'Y') {
			Damage(target);
			if (target->gethealth() <= 0) {
				for (int u = 0; u < 4; u++) {
					if (entitylist[u] == target) {
						delete entitylist[u];
						entitylist[u] = nullptr;
					}
				}
			}
			return;
		}
	}

	//turn this into an array zi ming and then make it into the undo function
	//ill do something similar to the boulder so when you recieve it all you need to do is turn it into an array

	int prevx = getx();
	int prevy = gety();
	char input = _getch();
	switch (input) {
	case 'w':
		sety(gety() - 1);
		break;
	case 'a':
		setx(getx() - 1);
		break;
	case 'd':
		setx(getx() + 1);
		break;
	case's':
		sety(gety() + 1);
		break;
	case'b':
		break;
	default:
		std::cout << "invalid input";
	}

	//runs thru the item list 
	for (int u = 0; u < 4; u++) {
		if (u == 0) {
			continue;
		}
		if (entitylist[u] != nullptr) {
			if (getx() == entitylist[u]->getx() &&
				gety() == entitylist[u]->gety())
			{
				setx(prevx);
				sety(prevy);
				return;
			}
		}
	}
//remeber its called a destructor
	for (int u = 0; u < 3; u++) {
		if (gameobjectlist[u] != nullptr) {
			if (getx() == gameobjectlist[u]->getx() &&
				gety() == gameobjectlist[u]->gety())
			{

				//uh if you set your icon for your wall to be T it becomes a wall now
				if (gameobjectlist[u]->geticon() == 'T') {
					setx(prevx);
					sety(prevy);
					return;
				}
				//i am a boulder pushing 
				





				//boulder pushing time 
				if (gameobjectlist[u]->geticon() == 'O') {

					std::cout << "boulder push";


					if (gameobjectlist[u]->gety() && gameobjectlist[u]->getx()) {
						switch (input) {
							if (gameobjectlist[u]->gety() == 1 || gameobjectlist[u]->gety() == 15) {

						case 'w':
							gameobjectlist[u]->sety(gameobjectlist[u]->gety() - 1);
							break;
						case's':
							gameobjectlist[u]->sety(gameobjectlist[u]->gety() + 1);
							break;

							}
				
						//left and right 
							if (gameobjectlist[u]->getx() == 1 || gameobjectlist[u]->getx() == 15) {
						case 'a':
							gameobjectlist[u]->setx(gameobjectlist[u]->getx() - 1);
							break;
						case 'd':
							gameobjectlist[u]->setx(gameobjectlist[u]->getx() + 1);
							break;

							}
						case'b':
							break;
						default:
							std::cout << "invalid input";
						}
					}
					else {

					}




					return;
				}
			}
		}
	}
}
void hero::setattack(int atack) {
	attack = atack;
}
int hero::getattack() {
	return attack;
}