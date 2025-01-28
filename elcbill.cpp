#include <iostream>
using namespace std;
int main()
{
    int units;
    int billAmount = 0;
    cout << "Enter the number of units consumed: ";
    cin >> units;

    if (units <= 100)
    {
        billAmount = 0;
    }
    else if (units <= 200)

    {
        billAmount = (units - 100) * 5.0;
    }
    else
    {
        billAmount = (100 * 5) + ((units - 200) * 10);
    }

    cout << "The bill amount is: " << billAmount << " rupya" << endl;

    return 0;
}
