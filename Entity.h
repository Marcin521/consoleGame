//
// Created by Marcin on 12.11.2020.
//

#ifndef SIMULATION_ENTITY_H
#define SIMULATION_ENTITY_H

#include <string>

using namespace std;

class Entity {

protected:
    //nazwa
    string name;
    //obrona broniącego
    int def;
    //wartość obrażeń atakującego
    int atk;
    //hp
    int hp;
    //różnica levelu
    int lvl;

public:

    string getname();
    int getdef();
    int getatk();
    int gethp();
    int getlvl();

    virtual int takeDamage(int, int, int);
    virtual int dealDamage();

    //twoże konstruktor
    Entity(string, int, int, int, int);
    ~Entity();
};


#endif //SIMULATION_ENTITY_H
