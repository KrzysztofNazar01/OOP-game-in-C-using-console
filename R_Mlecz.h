#pragma once
#include "Roslina.h"
class Mlecz : public Roslina {
private:
	void Split() override;

public:
	Mlecz();
	Mlecz(Swiat* swiat, const COORDINATES pos, int wiek);

	virtual void Akcja() override;

	void Kolizja(Organizm* o) override;

	~Mlecz();
};