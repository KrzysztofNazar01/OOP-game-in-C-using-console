#include "Zwierze.h"
#include "Swiat.h"
Zwierze::Zwierze(){}
Zwierze::~Zwierze(){}


void Zwierze::Akcja() {
    DIRECTION dir = ZrobRuch();
    SprawdzKolizje(dir);
}


DIRECTION Zwierze::ZrobRuch() {
    DIRECTION dir = NO_CHANGE;
    while (dir == NO_CHANGE) {
        int random = rand() % 3;
        switch (random) {
        case UP: {
            if (pozycja.y - step >= 0) {
                cout << "Up" << endl;//key up
                pozycja.y -= step;
                dir = UP;
            }
        }break;
        case DOWN: {
            if (pozycja.y + step <= swiat->GetWysokosc()) {
                cout << "Down" << endl;  // key down
                pozycja.y += step;
                dir = DOWN;
            }
        }break;
        case LEFT: {
            if (pozycja.x - step >= 0) {
                cout << "Left" << endl;  // key left
                pozycja.x -= step;
                dir = LEFT;
            }
        }break;
        case RIGHT: {
            if (pozycja.x + step <= swiat->GetSzerokosc()) {
                cout << "Right" << endl;  // key right
                pozycja.x += step;
                dir = RIGHT;
            }
        }break;
        }
    }
    return dir;
}


void Zwierze::SprawdzKolizje(DIRECTION dir) {

    if (dir != NO_CHANGE) {

        Organizm* Def = swiat->GetPlansza()[pozycja.y][pozycja.x];

        if (sila < 5 && Def->GetZnak() == ZOLW) // jesli organizm ma sile <5 --> zolw odeprze jego atak
        {
            switch (dir) { // organizm sie cofa
            case UP: {
                pozycja.y += step;
            }break;
            case DOWN: {
                pozycja.y -= step;
            }break;
            case LEFT: {
                pozycja.x += step;
            }break;
            case RIGHT: {
                pozycja.x -= step;
            }break;
            }
        }
        else {
            cout << "Kolizja Att=" << this->GetZnak() << " z Def=" << Def->GetZnak() << " ";
            Def->Kolizja(this);
        }
    }

}