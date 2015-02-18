#include "Game.h"

void Game::init()
{
	hHealth = 200; hAttack = 80;
	sHealth = 50; sAttack = 15;

	cout << "*** Humans vs Skeletons! ***" << endl;
	cout << "How many humans are up for battle? ";
	cin >> numHumans;
	cout << endl << "How many skeletons will they be fighting? ";
	cin >> numSkulls;
	cout << endl << endl << "Let the combat commence!\n\n";
	cout << numHumans << " humans approach, " << numSkulls << " skeletons crawl up from the ground!\n\n <Battle ensues> \n\n";


	for (int i = numHumans; i > 0; i--) {
		humans.push_back( new Combatant(hHealth, hAttack) );
	}

	for (int i = 0; i < numSkulls; i++) {
		skelingtons.push_back( new Combatant(sHealth, sAttack) );
	}

	//cout << endl <<"health: " << humans[0]->getHealth() << "attack: " << humans[0]->getAttack() << endl;

	//cout << (rand()%20) << endl;
	//cout << randIntGen(1,100) << " " << randIntGen(1,100);
}

void Game::loop()
{
	// roll a number, if between 1 and 7, a human attacks,
	// if between 10 and 16, a skeleton attacks
	// 19 results in both attacking
	//cout << "makes it this far (to loop) " << endl;

	float randNum;
	bool humanTurn = true;

	//I don't like the implementation of the vector, I wanted to use the last entry (humans.back()), then when it was killed, pop_back() to take it off, but debugging the problems was getting frustrating.
	humIter = humans.begin();
	skelIter = skelingtons.begin();

	//cout <<"Iterators set" << endl;

	while((humans.size()>0) && (skelingtons.size()>0))
	{
		//TODO
		//implement the turns, a random number is generated, if it corresponds to an attack, take the health from the attacked combatant 

		randNum = randNumGen();

		

		if ( humanTurn) {//human attacks
			if (randNum < 0.33f)
				(*skelIter)->takeHealth( (*humIter)->getAttack() );
		}
		else {//skeleton attack
			if (randNum < 0.50f)
				(*humIter)->takeHealth( (*skelIter)->getAttack() );
		}
		if ( randNum == 0.50f) {
			(*skelIter)->takeHealth( (*humIter)->getAttack() );
			(*humIter)->takeHealth( (*skelIter)->getAttack() );
			cout << "THERE WAS A CLASH!" << endl;
		}

		//if a combatants health is all taken, remove from vector, NEXT!
		if ((*humIter)->getHealth() < 1) {
			humans.erase(humIter);
			humIter = humans.begin();
		}
		if ((*skelIter)->getHealth() <1) {
			skelingtons.erase(skelIter);
			skelIter = skelingtons.begin();
		}

		//switch turn at end of loop
		if (humanTurn) humanTurn = false;
		else humanTurn = true;
	}

	if ((humans.size()) >0)
		cout << "Humans won!\n " << humans.size() << " survived that gruesome battle." << endl;
	else if ((skelingtons.size()) >0)
		cout << "Skeletonss won!\n " << (skelingtons.size()) << " survived that gruesome battle." << endl;
	else // in the off chance both are reduced to 0
		cout << "I guess nobody won this war. Nobody ever wins in a war." << endl;

	cout << (numHumans - humans.size()) << " humans died, and " << (numSkulls - skelingtons.size()) << " skeletons died" << endl;

}

float Game::randNumGen()
{
	mt19937 gen(time(0));
	uniform_real_distribution<float> roll(0.0f,1.0f);
	return roll(gen);
}

