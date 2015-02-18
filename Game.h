#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include <vector>

#include "Combatant.h"



using namespace std;

class Game
{
public:
	void init();
	void loop();
private:
	int numHumans, numSkulls;
	//humans are stronger and have more health,
	// skeletons have numbers over the living.
	int hHealth, hAttack, sHealth, sAttack;

	vector<Combatant*> humans;
	vector<Combatant*> skelingtons;

	vector<Combatant*>::iterator humIter;
	vector<Combatant*>::iterator skelIter;

	float randNumGen();
	
};


#endif
