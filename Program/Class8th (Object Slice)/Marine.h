#pragma once
#include "Terran.h"

class Marine : public Terran
{
public:
	Marine();

	void Recovry() override;
	void Damage(int damage) override;
};

