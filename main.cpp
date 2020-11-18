#include <iostream>
#include <vector>
#include "Entity.h"
using namespace std;

int main() {

    int n, s;

    cout << "podaj liczbe graczy" << endl;
    cin >> n;

    vector<Entity> arr;

    for(; n>0; n--)
    {
        cout << "name your entity" << endl;
        string a;

        int b, c, d, e;

        cin >> a >> b >> c >> d >> e;

        arr.push_back(Entity (a, b, c, d, e));

    }

    return 0;
}