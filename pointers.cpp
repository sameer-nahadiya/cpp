#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 5;
    int a = num;
    a++;

    int *p = &num;
    cout << num << endl;
    (*p)++;
    cout << num << endl;

    return 0;
    // int i = 5;
    // // int *p=&i;

    // int *p = 0;
    // p = &i;
    // cout << p << endl;
    // cout<< *p << endl;

    // int num = 5;
    //  cout << num << endl;

    // // address of operators -&
    // cout << "address of num is: " << &num << endl;
    // int *ptr = &num;
    // cout << "Address is:" << ptr << endl;
    // cout << "value is:" << *ptr << endl;

    // double d = 5.7;
    // double *p2 = &d;
    // cout << "Address is:" << p2 << endl;
    // cout << "value is:" << *p2 << endl;
}