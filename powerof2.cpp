#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number";
    cin >> n;
    for (int i = 1; i < 30; i++)
    {
        int ans = pow(2, 1);
        if (ans == n)
        {
            return true;
        }
    }
    return false;
}
