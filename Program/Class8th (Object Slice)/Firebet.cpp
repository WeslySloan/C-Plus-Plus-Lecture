#include "Firebet.h"

Firebet::Firebet()
{
	health = 45;
	maxHP = health;
}

void Firebet::Recovry()
{
	health = maxHP;

	cout << "Firebet HP : " << health << endl;
}

void Firebet::Damage(int damage)
{
	health -= damage;

	cout << "Firebet HP : " << health << endl;
}
