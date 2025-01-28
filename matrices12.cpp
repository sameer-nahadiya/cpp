#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        // print karao space
        int space = n - 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        // print first triangle
        int col = 1;
        while (col <= n)
        {
            cout << col;
            col++;
        }
        // print second triangle

        cout << endl;
        row++;
    }
    return 0;
}