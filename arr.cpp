#include <iostream>
using namespace std;

void printarray(int arr[], int size)
{

    cout << "printting the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "printing is DONE" << endl;
}
int main()
{
    int third[15] = {2, 7};
    int fourth[10] = {2, 7, 18, 30};
    printarray(third, 2);
    printarray(fourth, 9);

    cout << "everything is fine";
    return 0;
}
