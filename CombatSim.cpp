/*
Humans V Skeletons 1 dimensional battle simulator challenge set on https://www.youtube.com/watch?v=TH7plF4UT_E

My crude attempt at the challenge.

A number of humans and skeletons are input at the start, then imagine there being a line of humans and skeletons, with only 1 human and skeleton fighting at any one time. Once one is dead, the next steps up to fill their place until all of 1 type is dead.
*/

#include "Game.h"

int main()
{
	Game myGame;
	myGame.init();
	myGame.loop();
}
