#include <iostream>
#include <vector>
#include "Entity.h"
using namespace std;


/*float otrzymajObrażenia(float *arr)
{
    //(ATK * ( DEF / (DEF + 10) ) * ( 1 - ( LEVEL_DIFF / LEVEL_DIFF + 5 ) )
}
*/

int main() {

    int n, s;

    cout << "podaj liczbe graczy" << endl;
    cin >> n;

    s=n*4;//----------------

    float arrN[s];

    vector<Entity> arr;

    for(; n>0; n--)
    {
        string a;
        int b, c, d, e;

        cin >> a >> b >> c >> d >> e;

        arr.push_back(Entity (a, b, c, d, e));
        arrN[s-1] = c;
    }



    return 0;
}