#include <iostream>
#include <vector>
#include "Entity.h"
using namespace std;


float takeDamage(string a, int b, int c, int d, int e)
{
    int ATK, DEF, LEVEL_DIFF;
    float result;

    ATK = b;
    DEF = d;
    LEVEL_DIFF = e;

    result = (ATK * ( DEF / (DEF + 10) )) * ( 1 - ( LEVEL_DIFF / LEVEL_DIFF + 5 ) );
    cout << result << endl;
}


int main() {

    int n, s;

    cout << "podaj liczbe graczy" << endl;
    cin >> n;

    s=n*4;//----------------

    float arrN[s];

    vector<Entity> arr;

    for(; n>0; n--)
    {
        cout << "Name your entity" << endl;
        string a;

        int b, c, d, e;

        cin >> a >> b >> c >> d >> e;

        arr.push_back(Entity (a, b, c, d, e));
        arrN[s-1] = c;

    }

    return 0;
}