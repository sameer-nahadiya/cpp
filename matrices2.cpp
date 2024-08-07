#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int r = 1;
    char C;
    while (r <= n)
    {
        int c = 1;
        while (c <= r)
        {
            char C = 'A' + c - 1;
            cout << C;
            c++;
        }
        cout << endl;
        r++;
    }

    return 0;
}