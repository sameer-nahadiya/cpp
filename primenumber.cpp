#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;
    bool prime = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        cout << "not a prime number" << endl;
    }
    else{        
            cout << "prime number" << endl;
        }
}