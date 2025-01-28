#include <bits/stdc++.h>
using namespace std;

void update2(int &n)
{
    n++;
}
void update1(int n)
{
    n++;   // pass by value function
}
int main()
{
    // int i = 5;
    // // creating ref variable
    // int &j = i;
    // cout << "print i=" << i << endl;
    // i++;
    // cout << "print i=" << i << endl;
    // j++;
    // cout << "print i=" << i << endl;
    int i = 5;
    cout << "Before " << i << endl;
    update2(i);
    cout << "After " << i << endl;

    return 0;
}
