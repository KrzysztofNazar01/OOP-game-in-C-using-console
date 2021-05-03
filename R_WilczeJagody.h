#pragma once
#include "Roslina.h"

class WilczeJagody : public Roslina {
private:
	void init() override;

public:
	WilczeJagody();
	WilczeJagody(Swiat* swiat, const COORDINATES pos, int wiek);

	void Kolizja(Zwierze* atakujacy, DIRECTION dir) override;

	~WilczeJagody();
};
