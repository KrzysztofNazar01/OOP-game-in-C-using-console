#pragma once
#include "Defines.h"
class Zwierze;

class Organizm {
protected:
	int sila;
	int inicjatywa;
	COORDINATES pozycja;
	int wiek = 0;
	Swiat* swiat;
	char znak;
	void NormalnaKolizja(Zwierze* o, DIRECTION dir);
public:
	Organizm();

	virtual void Akcja() = 0;  //abstakcyjna bo rozna dla zwierzat i roslin
	virtual void Kolizja(Zwierze* o, DIRECTION dir); //public bo musi byc dostepna w dla inncyh w metodzie SprawdzKolizje()

	const char GetZnak();

	int GetWiek();
	void SetWiek(int wiek);

	int GetInicjatywa();
	void SetInicjatywa(int inicjatywa);

	int GetSila();
	void SetSila(int sila);

	Swiat* GetSwiat();
	void SetSwiat(Swiat *swiat);

	COORDINATES GetPozycja();
	void SetPozycja(COORDINATES pos);

	~Organizm();
};


