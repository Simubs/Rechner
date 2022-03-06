//
// Created by Simon on 06.03.2022.
//



#include "Bruch.h"


Bruch::Bruch(int eingabeNenner, int eingabeZaeler){
    zaeler = eingabeZaeler;
    nenner = eingabeNenner;
    ggT();
}

void Bruch::ggT(){
    int z, n;
    z = zaeler;
    n = nenner;
    while (z != n)
        if (z < n)
            n = n - z;
        else z = z - n;
    ggt = z;

}

void Bruch::setNenner(int neuerNenner){
    nenner = neuerNenner;
}

int Bruch::getNenner(){
    return nenner;
}

void Bruch::setZaeler(int neuerZaeler){
    zaeler = neuerZaeler;
}

int Bruch::getZaeler(){
    return zaeler;
}

int Bruch::getGgT(){
    return ggt;
}

