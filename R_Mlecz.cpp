#include "R_Mlecz.h"
#define ILOSC_PROB_ROZPRZEST 0

Mlecz::Mlecz() {
	init();
}
Mlecz::Mlecz(Swiat* swiat, const COORDINATES pos, int wiek) {
	init();
	this->wiek = wiek;
	this->swiat = swiat;
	this->pozycja = pos;

}

Mlecz::~Mlecz() {}

void Mlecz::init() {
	this->sila = 0;
	this->znak = MLECZ;
}


void Mlecz::Akcja() {
	for (int i = 0; i < ILOSC_PROB_ROZPRZEST; i++) {
		NormalnaAkcja();
	}
}



