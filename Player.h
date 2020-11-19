//
// Created by Marcin on 18.11.2020.
//

#ifndef SIMULATION_PLAYER_H
#define SIMULATION_PLAYER_H


#include "Entity.h"

class Player : public Entity {

    int takeDamage(int, int, int);
    int dealDamage();

};


#endif //SIMULATION_PLAYER_H
