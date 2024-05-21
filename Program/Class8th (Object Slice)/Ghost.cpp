#include "Ghost.h"


Ghost::Ghost()
{
	health = 50;
	maxHP = health;
}

void Ghost::Recovry()
{
	health = maxHP;

	cout << "Ghost HP : " << health << endl;
}

void Ghost::Damage(int damage)
{
	health -= damage;

	cout << "Ghost HP : " << health << endl;
}
