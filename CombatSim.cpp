/*
Humans V Skeletons 1 dimensional battle simulator challenge set on https://www.youtube.com/watch?v=TH7plF4UT_E

My crude attempt at the challenge.

A number of humans and skeletons are input at the start, then imagine there being a line of humans and skeletons, with only 1 human and skeleton fighting at any one time. Once one is dead, the next steps up to fill their place until all of 1 type is dead.
*/

#include <iostream>
#include <string>
#include <random>
#include <ctime>

int randIntGen(int lower, int higher);

using namespace std;
int main()
{
	int numHumans, numSkulls;
	//humans are stronger and have more health,
	// skeletons have numbers over the living.
	int hHealth = 100, hAttack = 40;
	int sHealth = 50, sAttack = 15;
	

	cout << "*** Humans vs Skeletons! ***" << endl;
	cout << "How many humans are up for battle? ";
	cin >> numHumans;
	cout << endl << "How many skeletons will they be fighting? ";
	cin >> numSkulls;
	cout << endl << endl << "Let the combat commence!\n\n";
	cout << numHumans << " humans approach, " << numSkulls << " skeletons crawl up from the ground!\n\n <Battle ensues> \n\n";

	// roll a number, if between 0 and 7, a human attacks,
	// if between 10 and 16, a skeleton attacks

	
}

int randIntGen(int lower, int higher)
{
	mt19937 gen(time(0));
	uniform_int_distribution<int> roll(lower,higher);
	return roll(gen);
}
