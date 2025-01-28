#include <bits/stdc++.h>
using namespace std;
<<<<<<< HEAD
// pointer joo hai wo address ko store kr lega
// int *ptr=&i
//&i=address of i
// int*p= p is a pointer to int
int main()
{
    // int *ptr;   //aise kabhi nahi karna aise time me pointer garbage value ko point karta hai instead of this we can do this
    // int *ptr=0;
    // int num = 5;
    // int *p1 = &num;
    // int a = num;
    // a++;
    // int *p2=&a;
    // cout << a << endl;
    // cout << p2 << endl;
    // cout << p1 << endl;
    // cout << num << endl;

    // int num = 5;
    // int *p = &num;
    // cout << num << endl;
    // (*p)++;
    // cout << num << endl;
                                // COPYING A POINTER
    // int *q = p;
    // cout << p << "-" << q << endl;
    // cout << *p << "-" << *q << endl;

                                // important concept
    // int i = 3;
    // int *t = &i;
    // *t = *t + 1;
    // cout << *t << endl;
    // cout << "before t" << t << endl;
    // t = t + 1;
    // cout << "after t" << t << endl;

                                //POINTERS IN ARRAY
    int arr[10]={23, 122, 41, 67};
    cout<<"address of first block:"<<arr<<endl;
    cout<<"address of first block:"<<&arr<<endl; //they both are same

    cout<<"4th:"<<*arr<<endl;
    cout<<"5th:"<<*(arr+1)<<endl;
    cout<<"6th:"<<*arr+1<<endl;
    cout<<"7th:"<<arr[2]<<endl;
    cout<<"8th:"<<*(arr+2)<<endl;
    //important formula arr[i]= *(arr+i)

    return 0;
=======

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
>>>>>>> 6911d970b7c25e259be74b72fb7dede6bfa1a591
}