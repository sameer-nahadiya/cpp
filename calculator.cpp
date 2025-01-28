#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n;
    cout << "enter the value of n1 :";
    cin >> n1;
    cout << "enter the value of n2 :";
    cin >> n2;
    cout << "enter the operator number:";
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "product of number is :" << n1 * n2;
        break;
    case 2:
        cout << "sum of the numbers is :" << n1 + n2;
        break;
    case 3:
        cout << "division the numbers :" << n1 / n2;
        break;
    case 4:
        cout << "substraction of the numbers :" << n1 - n2;
        break;
    }
}