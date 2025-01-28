#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        
    
        for (int i = 0; i < s.length(); i++) {
            if (isalnum(s[i])) {
                str.push_back(tolower(s[i]));
            }
        }


        int i = 0;
        int j = str.length() - 1;
        while (i <= j) {
            if (str[i++] != str[j--]) {
                return false;
            }
        }

        return true;
    }

};


int main() {
    Solution solution;
    string test1 = "A man, a plan, a canal: Panama";

    cout << boolalpha; 
    cout << "Is test1 a palindrome? " << solution.isPalindrome(test1) << endl;

    return 0;
}
