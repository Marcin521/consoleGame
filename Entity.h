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
    //obrona broniącego
    int DEF;
    //wartość obrażeń atakującego
    int ATK;
    //Hp
    int HP;
    //różnica levelu
    int LEVEL_DIFF;

public:

    string getNAME();
    int getDEF();
    int getATK();
    int getHP();
    int getLEVEL_DIFF();

    //twoże konstruktor
    Entity(string, int, int, int, int);
    ~Entity();

};


#endif //SIMULATION_ENTITY_H
