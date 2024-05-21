#pragma once
#include "Terran.h"
class Firebet : public Terran
{
public:
	Firebet();

	void Recovry() override;
	void Damage(int damage) override;
};

