#include <iostream>
#include <vector>
#include "Entity.h"
using namespace std;


float takeDamage(int b, int c, int d, int e)
{
    int ATK, DEF, LEVEL_DIFF;
    float result;

    ATK = b;
    DEF = d;
    LEVEL_DIFF = e;

    result = (ATK * ( float(DEF) / (DEF + 10) )) * ( 1 - ( float(LEVEL_DIFF) / (LEVEL_DIFF + 5 ) ));
    return result;
}

float dealDamage(int b, int e)
{
    ATK = b;
    DEF = d;
    LEVEL_DIFF = e;

    ATK * ( DEF / (DEF + 10) )

    return
}


int main() {

    int n, s;

    cout << "podaj liczbe graczy" << endl;
    cin >> n;

    vector<Entity> arr;

    cout << takeDamage("A", 4, 5, 6, 7) << endl;

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