//
// Created by Simon on 06.03.2022.
//

#ifndef RECHNER_BRUCHSERVICE_H
#define RECHNER_BRUCHSERVICE_H

#include "Bruch.h"

struct uebergabeBrueche{


    uebergabeBrueche( Bruch bruch1, Bruch bruch2) : bruch1(bruch1), bruch2(bruch2) {

    }
    Bruch bruch1;
    Bruch bruch2;

};

void menu();

uebergabeBrueche eingabe();

Bruch eingabeEinzeln();

Bruch kuerzen(Bruch);

Bruch addieren(uebergabeBrueche eingegebenerBruch);

Bruch subtrahieren(uebergabeBrueche eingegebenerBruch);

Bruch multiplizieren(uebergabeBrueche eingegebenerBruch);

Bruch dividieren(uebergabeBrueche eingegebenerBruch);

void ausgabe(Bruch);

#endif //RECHNER_BRUCHSERVICE_H
