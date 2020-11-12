//
// Created by Marcin on 12.11.2020.
//

#ifndef SIMULATION_ENTITY_H
#define SIMULATION_ENTITY_H

#include <string>

using namespace std;

class Entity {

    //nazwa
    string NAME;
    // obrona broniącego
    int DEF;
    // wartość obrażeń atakującego
    int ATK;
    //różnica levelu
    int LEVEL_DIFF;

public:

    string getNAME();
    int getDEF();
    int getATK();
    int getLeVEL_DiFF();

    //twoże konstruktor
    Entity(string, int, int, int);
    ~Entity();

};


#endif //SIMULATION_ENTITY_H
