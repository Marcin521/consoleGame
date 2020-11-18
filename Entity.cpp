//
// Created by Marcin on 12.11.2020.
//

#include "Entity.h"
Entity::Entity(string n, int d, int a, int h, int l)
{
    NAME=n;
    def=d;
    ATK=a;
    HP=h;
    lvl=l;
}

string Entity::getNAME()
{
    return NAME;
}

int Entity::getdef()
{
    return def;
}

int Entity::getATK()
{
    return ATK;
}

int Entity::getHP()
{
    return HP;
}

int Entity::getlvl()
{
    return lvl;
}

Entity::~Entity() {}