#ifndef COMBATANT_H
#define COMBATANT_H

class Combatant{
private:
	int mHealth, mAttack;
	bool mAlive;
public:
	Combatant(int health, int attack) : mHealth(health), mAttack(attack), mAlive(true) {}
	~Combatant(){}
	int getHealth() { return mHealth; }
	int getAttack() { return mAttack; }
	void takeHealth(int damage){ mHealth-=damage; }
	bool isAlive() { return mAlive; }
};

#endif
