#pragma once
#include "Zwierze.h"

class Zolw : public Zwierze {
private:
	void init() override;
public:
	Zolw();
	Zolw(Swiat* swiat, COORDINATES pos, int wiek);

	void Akcja() override;

	~Zolw();
};
