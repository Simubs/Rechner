//
// Created by Simon on 06.03.2022.
//

#ifndef RECHNER_BRUCH_H
#define RECHNER_BRUCH_H


class Bruch {

private:
    int zaeler = 0;
    int nenner = 0;
    int ggt = 0;
    void ggT();
public:
    void setNenner(int);
    int getNenner();
    void setZaeler(int);
    int getZaeler();
    int getGgT();
    Bruch(int, int);
};


#endif //RECHNER_BRUCH_H
