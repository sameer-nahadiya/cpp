#include <bits/stdc++.h>
using namespace std;

long long int sqrtinteger(int n)
{
    int s = 0;
    int e = n;
    int mid = s + (e - s) / 2;
    long long int ans = -1;
    while (s < e)
    {
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        else if (square < n)
        {
            square = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
double moreprecision(int n, int precision, int tempsol)
{
    double factor = 1;
    double ans = tempsol;
    for (double i = 0; i < precision; i++)
    {
        factor = factor / 10;
        //0.1 factor 
        //0.01 factor
        //0.001 factor
    }
    for (double j = ans; j * j < n; j = j + factor)
    {
        ans = j;
    }
    return ans;
}
int main()
{
    int n;
    cout << "enter the number ";
    cin >> n;

    int tempsol = sqrtinteger(n);
    cout << "Answer is " << moreprecision(n, 3, tempsol) << endl;
    return 0;
}