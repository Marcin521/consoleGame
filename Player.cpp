//
// Created by Marcin on 18.11.2020.
//

#include "Player.h"
#include "Entity.h"
//#include <math.h>


    int Player::takeDamage(int atk, int lvl, int hp)
    {
        float score;

        score = (atk * ( float(def) / (def + 10) )) * ( 1 - ( float(this->lvl-lvl) / ((this->lvl-lvl) + 5 ) ));
        // this-> odnieisenie się do obiektu

        //score = (int ceil) ( score - hp) ;

        return score;
        //od  hp - wynik
        // i zwróć wynik
        //wynik zaokrąflij w górę funkcją
    }

    int Player::dealDamage()
    {
        return atk * ( 1 + ( lvl / 10 ) );
    }


