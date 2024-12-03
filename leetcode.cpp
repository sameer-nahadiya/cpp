#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
    vector<int> result;

    for (int num : nums) {
        int index = abs(num) - 1;
        if (nums[index] < 0) {
            result.push_back(abs(num));
        } else {
            nums[index] = -nums[index];
        }
    }

    return result;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array (separated by space): ";
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    vector<int> duplicates = findDuplicates(nums);

    cout << "Duplicates: ";
    for (int num : duplicates) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
