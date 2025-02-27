#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        vector<long long> ans;
        ans.push_back(a[0]);
        for (int i = 1; i < n; ++i) {
            if (a[i - 1] <= a[i]) {
                ans.push_back(a[i]);
            } else {
                ans.push_back(min(a[i - 1], a[i]));
                ans.push_back(a[i]);
            }
        }
        cout << ans.size() << "\n";
        for (long long x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}