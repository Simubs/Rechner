//
// Created by Simon on 06.03.2022.
//
#include <iostream>


using namespace std;
#include "BruchService.h"


void menu(){

    int btn;
    while(true) {

        cout << "[0] Programm beenden" << endl << "[1] Bruch kuerzen" << endl << "[2] Brueche addieren" << endl
             << "[3] Brueche subtrahieren" << endl << "[4] Brueche multiplizieren" << endl << "[5] Brueche dividieren"
             << endl;

        cin >> btn;

        switch (btn) {
            case 0: //beenden
                return;
            case 1: //kürzen
                ausgabe(kuerzen(eingabeEinzeln()));
                break;
            case 2: //addieren
                ausgabe(kuerzen(addieren(eingabe())));
                break;
            case 3: //subtrahieren
                ausgabe(kuerzen(subtrahieren(eingabe())));
                break;
            case 4: //multiplizieren
                ausgabe(kuerzen(multiplizieren(eingabe())));
                break;
            case 5: //dividieren
                ausgabe(kuerzen(dividieren(eingabe())));
                break;

        }
    }

}

uebergabeBrueche eingabe(){
    uebergabeBrueche eingegebenerBruch = *new uebergabeBrueche(Bruch(0, 0), Bruch(0, 0));

    int tempNenner = 0;
    int tempZaeler = 0;
    cout << "Bitte Z�hler des Ersten Bruchs eingeben" << endl;
    cin >> tempZaeler;
    cout << "Bitte Nenner des Ersten Bruchs eingeben" << endl;
    cin >> tempNenner;
    cout << "Eingegebener Wert ist:" << "(" << tempZaeler << "/" << tempNenner << ")" << endl;
    Bruch bruch1 {tempNenner,tempZaeler} ;

    eingegebenerBruch.bruch1 = bruch1;

    cout << "Bitte Z�hler des Zweiten Bruchs eingeben" << endl;
    cin >> tempZaeler;
    cout << "Bitte Nenner des Zweiten Bruchs eingeben" << endl;
    cin >> tempNenner;
    cout << "Eingegebener Wert ist:" << "(" << tempZaeler << "/" << tempNenner << ")" << endl;

    Bruch bruch2 {tempNenner,tempZaeler} ;

    eingegebenerBruch.bruch2 = bruch2;
    return eingegebenerBruch;
}

Bruch eingabeEinzeln(){

    int tempNenner = 0;
    int tempZaeler = 0;
    cout << "Bitte Z�hler des Bruchs eingeben" << endl;
    cin >> tempZaeler;
    cout << "Bitte Nenner des Bruchs eingeben" << endl;
    cin >> tempNenner;
    cout << "Eingegebener Wert ist:" << "(" << tempZaeler << "/" << tempNenner << ")" << endl;
    return Bruch {tempNenner, tempZaeler} ;


}

Bruch kuerzen(Bruch bruch){

    return Bruch((bruch.getNenner() / bruch.getGgT()),(bruch.getZaeler() / bruch.getGgT()));
}

Bruch addieren(uebergabeBrueche eingegebenerBruch) {

    if(eingegebenerBruch.bruch1.getNenner() != eingegebenerBruch.bruch2.getNenner()){
        int temp = 0;
        temp = eingegebenerBruch.bruch1.getNenner() * eingegebenerBruch.bruch2.getNenner();
        eingegebenerBruch.bruch2.setZaeler(eingegebenerBruch.bruch2.getZaeler() * eingegebenerBruch.bruch1.getNenner());
        eingegebenerBruch.bruch1.setZaeler(eingegebenerBruch.bruch1.getZaeler() * eingegebenerBruch.bruch2.getNenner());
        eingegebenerBruch.bruch1.setNenner(temp);
        eingegebenerBruch.bruch2.setNenner(temp);
    }

    Bruch ergebnis {eingegebenerBruch.bruch1.getNenner(),(eingegebenerBruch.bruch1.getZaeler() + eingegebenerBruch.bruch2.getZaeler())};

    return ergebnis;
}

Bruch subtrahieren(uebergabeBrueche eingegebenerBruch) {

    if(eingegebenerBruch.bruch1.getNenner() != eingegebenerBruch.bruch2.getNenner()){
        int temp = 0;
        temp = eingegebenerBruch.bruch1.getNenner() * eingegebenerBruch.bruch2.getNenner();
        eingegebenerBruch.bruch2.setZaeler(eingegebenerBruch.bruch2.getZaeler() * eingegebenerBruch.bruch1.getNenner());
        eingegebenerBruch.bruch1.setZaeler(eingegebenerBruch.bruch1.getZaeler() * eingegebenerBruch.bruch2.getNenner());
        eingegebenerBruch.bruch1.setNenner(temp);
        eingegebenerBruch.bruch2.setNenner(temp);
    }

    Bruch ergebnis {eingegebenerBruch.bruch1.getNenner(),(eingegebenerBruch.bruch1.getZaeler() - eingegebenerBruch.bruch2.getZaeler())};

    return ergebnis;
}

Bruch multiplizieren(uebergabeBrueche eingegebenerBruch) {
    int tempZaeler = eingegebenerBruch.bruch1.getZaeler() * eingegebenerBruch.bruch2.getZaeler();
    int tempNenner = eingegebenerBruch.bruch1.getNenner() * eingegebenerBruch.bruch2.getNenner();
    return Bruch(tempNenner,tempZaeler);
}

Bruch dividieren(uebergabeBrueche eingegebenerBruch) {

    return Bruch(eingegebenerBruch.bruch1.getNenner() * eingegebenerBruch.bruch2.getZaeler(),eingegebenerBruch.bruch1.getZaeler() * eingegebenerBruch.bruch2.getNenner());

}

void ausgabe(Bruch ergebnis){
    cout << "Das Ergebnis ist: " << " ( " << ergebnis.getZaeler() << " / " << ergebnis.getNenner() << " ) " << endl;
}






