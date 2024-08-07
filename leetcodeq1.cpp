#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;
    int sum = 0;
    int product = 1;

    while (n != 0)
    {
        int digit = n % 10;
        ;
        product = product * digit;
        sum = sum + digit;

        n = n / 10;
    }
    int answer = product - sum;
    cout << answer;
}