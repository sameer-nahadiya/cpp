#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j;
            j = j + 1;
        }
        int star = 1;
        while (star <= i - 1)
        {
            cout << '&';
            star = star + 1;
        }
        int star1 = 1;
        while (star1 <= i - 1)
        {
            cout << '&';
            star1 = star1 + 1;
        }
        int k = 1;
        while (k <= n - i + 1)
        {
            cout << n - i - k + 2;
            k = k + 1;
        }
        cout << endl;
        i = i + 1;
    }
}