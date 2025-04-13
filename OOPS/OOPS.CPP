#include <bits/stdc++.h>
using namespace std;

class Hero
{
    // properties
private:
    int health;
    char level;
public:
    void print()
    {
        cout << level << endl;
    }
};
int main()
{
    Hero ramesh;
    ramesh.health = 70;
    ramesh.level = 'A';
    cout << "ramesh health is:" << ramesh.health << endl;
    cout << "ramesh level is:" << ramesh.level << endl;

    return 0;
}