/*#include <iostream>
using namespace std;
int main()
{
    int num, num1, sum = 0;
    cout << "enter the number:";
    cin >> num;
    while (num > 0)
    {
        num1 = num % 10;
        sum = sum + num1;
        num = num / 10;
    }
    cout << "sum of the digit:" << sum << endl;
    return 0;
}*/
/*#include<iostream>
using namespace std;
int main() 
{
    int num,NUM1,sum=0;
    cin>>num;
    while(num>0)
    {
     NUM1=num%10;   
     sum=sum+NUM1;
     num=num/10;
    }
    cout<<sum<<endl;
}*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 

    int num,NUM1,sum=0;
    cin>>num;
    while(num>0)
    {
     NUM1=num%10;   
     sum=sum+NUM1;
     num=num/100;
    }
    cout<<sum<<endl;
    return 0;
}