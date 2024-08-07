#include <iostream>
using namespace std;
//funstion signature 
void printCounting(int n)
{   //FUNCTION BODY
    for (int i = 1; i <= n; i++)
    {
        cout << i;
    }
}                                                                                           
int main()
{
    int n;
    cin >> n;
    //FUNCTION CALLING
    printCounting(n);
}