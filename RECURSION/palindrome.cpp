#include <bits/stdc++.h>
using namespace std;

bool checkpalindrome(string str, int i, int j)
{
    // base case
    if (i > j)
    {
        return true;
    }
    if (str[i] != str[j])
    {
        return false;
    }
    else
    {
        // recursive call
        return checkpalindrome(str, i + 1, j - 1);
    }
}

int main()
{
    string name = "malayalam";
    cout << endl;
    bool isplaindrome = checkpalindrome(name, 0, name.length() - 1);
    if (isplaindrome)
    {
        cout << "Its is a palindrome" << endl;
    }
    else
    {
        cout << "Its not a palindrome" << endl;
    }
}