#include <iostream>
using namespace std;

int countsetbits(int n)
{
    int count = 0;
    while (n)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
int main()
{
    int num;
    cout << "enter the number:";
    cin >> num;
    cout << "number of set bits in " << num <<" "<<"is " << countsetbits(num);
    return 0;
}