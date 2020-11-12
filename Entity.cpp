//
// Created by Marcin on 12.11.2020.
//

#include "Entity.h"
Entity::Entity(string n, int d, int a, int l)
{
    NAME=n;
    DEF=d;
    ATK=a;
    LEVEL_DIFF=l;
}

string Entity::getNAME()
{
    return NAME;
}

int Entity::getDEF()
{
    return DEF;
}

int Entity::getATK()
{
    return ATK;
}

int Entity::getLeVEL_DiFF()
{
    return LEVEL_DIFF;
}

Entity::~Entity() {}