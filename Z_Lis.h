#pragma once
#include "Zwierze.h"

class Lis : public Zwierze {
private:
	void init() override;

public:
	Lis();
	Lis(Swiat* swiat, COORDINATES pos, int wiek) : Lis() {};

	DIRECTION ZrobRuch() override;

	~Lis();
};