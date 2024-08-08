
#include <bits/stdc++.h>

using namespace std;

class alpha
{
public:
    alpha()
    {
        cout << "Constructor of alpha called" << endl;
    }
};

class beta
{
public:
    beta()
    {
        cout << "Constructor of beta called" << endl;
    }
};

class gamma : public alpha, public beta
{
public:
    gamma()
    {
        cout << "Constructor of gamma called" << endl;
    }
};

int main()
{
    gamma g;

    return 0;
}
