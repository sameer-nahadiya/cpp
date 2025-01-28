#include <bits/stdc++.h>
using namespace std;
void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}
int stringlength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
char maxoccurencechar(string s)
{
    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
        if (ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
        }
        else
        {
            number = ch - 'A';
        }
        arr[number]++;
    }
    int maxi = -1;
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    char finalans = 'a' + ans;
    return finalans;
}

int main()
{
    char name[20];
    cout << "enter your name:" << endl;
    cin >> name;
    cout << "your name is:";
    cout << name << endl;
    int k = stringlength(name);
    cout << "length:" << k << endl;
    reverse(name, k);
    cout << "your name is:";
    cout << name << endl;
    cout << "maximum occurence char is:" << maxoccurencechar(name) << endl;

    return 0;
}
// string ko compare karne ke liye 
// use karte hai strcmp(s1,s2)
// string copy karne ke liye 
// use strcpy(dest,source)