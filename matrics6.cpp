#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int r = 1;
    while (r <= n)
    {
        int c = 1;
        while (c <= n)
        {
            char C = 'A' + r - 1;
            cout << C;
            c++;
        }
        cout << endl;
        r++;
    }
    return 0;
}