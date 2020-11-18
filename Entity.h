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
    int def;
    //wartość obrażeń atakującego
    int ATK;
    //Hp
    int HP;
    //różnica levelu
    int lvl;

public:

    string getNAME();
    int getdef();
    int getATK();
    int getHP();
    int getlvl();

    //twoże konstruktor
    Entity(string, int, int, int, int);
    ~Entity();
};


#endif //SIMULATION_ENTITY_H
