#pragma once
#include "Terran.h"
class Ghost : public Terran
{
public:
	Ghost();

	void Recovry() override;
	void Damage(int damage) override;
};

