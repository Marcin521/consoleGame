//
// Created by Marcin on 12.11.2020.
//

#include "Entity.h"
Entity::Entity(string n, int d, int a, int h, int l)
{
    name=n;
    def=d;
    atk=a;
    hp=h;
    lvl=l;
}

string Entity::getname()
{
    return name;
}

int Entity::getdef()
{
    return def;
}

int Entity::getatk()
{
    return atk;
}

int Entity::gethp()
{
    return hp;
}

int Entity::getlvl()
{
    return lvl;
}

int Entity :: takeDamage(int, int, int){
    return 1;
};

int Entity :: dealDamage(){
    return 0;
};

Entity::~Entity() {}