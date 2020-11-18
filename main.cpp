#include <iostream>
#include <vector>
#include "Entity.h"
using namespace std;


float takeDamage(int atk, int def, int LEVEL_DIFF)
{
    return (atk * ( float(def) / (def + 10) )) * ( 1 - ( float(LEVEL_DIFF) / (LEVEL_DIFF + 5 ) ));
}

float dealDamage(int atk, int lvl)
{
    return atk * ( 1 + ( lvl / 10 ) );
}


int main() {

    int n, s;

    cout << "podaj liczbe graczy" << endl;
    cin >> n;

    vector<Entity> arr;

    for(; n>0; n--)
    {
        cout << "Name your entity" << endl;
        string a;

        int b, c, d, e;

        cin >> a >> b >> c >> d >> e;

        arr.push_back(Entity (a, b, c, d, e));

    }

    return 0;
}