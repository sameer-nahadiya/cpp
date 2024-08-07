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
        char ch = 'A' + r - c;
        while (c <= n)
        {
            cout << ch<<" ";
            ch++;
            c++;
        }
        cout << endl;
        r++;
    }
    return 0;
}