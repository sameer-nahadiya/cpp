#include <iostream>
using namespace std;
int main()
{
    int amount;
    cout << "enter the amount : ";
    cin >> amount;
    int note = 0;
    int num = 1;
    switch (num)
    {
    case 1:
    {
        note = amount / 100;
        amount = amount - (note * 100);
        cout << note << " rs.100 required." << endl;
    }
    case 2:
    {
        note = amount / 50;
        amount = amount - (note * 50);
        cout << note << " rs.50 required." << endl;
    }
    case 3:
    {
        note = amount / 20;
        amount = amount - (note * 20);
        cout << note << " rs.20 required." << endl;
    }
    case 4:
    {
        note = amount / 10;
        amount = amount - (note * 10);
        cout << note << " rs. 10 required." << endl;
    }
    case 5:
    {
        note = amount / 1;
        amount = amount - (note * 1);
        cout << note << " rs.1 required." << endl;
    }
    }
}
