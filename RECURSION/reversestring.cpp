#include <bits/stdc++.h>
using namespace std;
void reverse(string &s, int i, int j)
{
    // base case
    if (i > j)
    {
        return;
    }
    swap(s[i], s[j]);
    i++;
    j--;
    //recursive call
    reverse(s, i, j);
}

int main()
{
    string s = "abcde";
    int i = 0;
    int j = s.size() - 1;
    reverse(s, i, j);
    cout << s << endl;
    return 0;
}