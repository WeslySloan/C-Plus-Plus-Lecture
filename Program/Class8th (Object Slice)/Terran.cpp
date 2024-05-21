#include "Terran.h"

Terran::Terran()
{

}
void Terran::Recovry()
{
	cout << "Terran Reccovry" << endl;
}

void Terran::Damage(int damage)
{
	cout << "Terran Damage" << endl;
	health -= damage;
}
