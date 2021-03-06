#include "Z_Zolw.h"
#include "Swiat.h"
Zolw::Zolw() {
	init();
}
Zolw::Zolw(Swiat* swiat, const COORDINATES pos, int wiek) {
	init();
	this->wiek = wiek;
	this->swiat = swiat;
	this->pozycja = pos;
}

Zolw::~Zolw() {}


void Zolw::Akcja() {
	int SzansaNaRuch = rand() % 4; // w 75% zolw nie zmienia swojego polozenia
	if (SzansaNaRuch) {
		DIRECTION dir = ZrobRuch();
		CzyOdbilAtak(dir);
	}
}



void Zolw::init() {
	this->sila = 2;
	this->inicjatywa = 1;
	this->znak = ZOLW;
}