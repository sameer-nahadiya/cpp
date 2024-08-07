#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int longestSubarray(vector<int>& arr) {
    sort(arr.begin(), arr.end()); // Sort the array
    int n = arr.size();
    int maxLength = 0;
    int currentLength = 1;

    for (int i = 1; i < n; ++i) {
        // Check the absolute difference between adjacent elements
        if (arr[i] - arr[i - 1] <= 1) {
            currentLength++;
        } else {
            maxLength = max(maxLength, currentLength);
            currentLength = 1;
        }
    }

    maxLength = max(maxLength, currentLength); // Check for the last subarray

    return maxLength;
}

int main() {
    vector<int> arr = {1,1,2,2,4,4,5,5,5};
    cout << "Length of longest subarray: " << longestSubarray(arr) << endl; // Output: 5
    return 0;
}
