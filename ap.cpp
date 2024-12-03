#include <iostream>
using namespace std;
int main()
{
    int n, d, a;
    cout << "enter the starting term:";
    cin >> a;
    cout << "enter the common difference:";
    cin >> d;
    cout << "enter the number of term:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int ap;
        ap = a * i + d;
        cout << " "  <<ap;
    }
}