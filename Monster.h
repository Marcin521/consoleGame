//
// Created by Marcin on 18.11.2020.
//

#ifndef SIMULATION_MONSTER_H
#define SIMULATION_MONSTER_H


#include "Entity.h"

class Monster : public Entity {

    int takeDamage(int, int, int);
    int dealDamage();

};


#endif //SIMULATION_MONSTER_H
