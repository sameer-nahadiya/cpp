#include <bits/stdc++.h>
using namespace std;
//WHEN A POINTER POINTING TO AN ARRAY THEN YOU CANNOT UPDATE THE ARRAY
//JAB BHI CHARACTER ARRAY PR POINTER LAGATE HA 
//AUR JAB USKO COUT KARWATE HAI THO PURA KA PURA ARRAY PRINT HOO JATA HAI
void update(int **p2)
{
    //p2 = p2 + 1;
    // kuch change hoga - NO

    //*p2=*p2 +1;
    // kuch change hoga - YES
    
    **p2=**p2+1;
    // kuch change hoga - YES
}

int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << "Sab sahi chal rha hai" << endl;
    // cout << "printing p " << p << endl;
    // cout << "address of p " << &p << endl;
    // cout << "value in the p2 " << *p2 << endl;
    // cout<<"value of i "<< i<<endl;
    // cout<<"value of i "<< *p <<endl;
    // cout<<"value of i "<< **p2 <<endl;
    // cout<<"value of p "<< p<<endl;
    // cout<<"value of p "<< *p2<<endl;
    // cout<<"value of p "<< &i<<endl;
    cout << "before " << i << endl;
    cout << "before " << p << endl;
    cout << "before " << p2 << endl;
    update(p2);
    cout << "after " << i << endl;
    cout << "after " << p << endl;
    cout << "after " << p2 << endl;
    return 0;
}