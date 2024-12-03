#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& boards, int n, int A, int B, long long maxTime) {
    int painters = 1;
    long long currentTime = 0;

    for (int i = 0; i < n; i++) {
        long long timeToPaint = boards[i] * 1LL * B;
        if (currentTime + timeToPaint <= maxTime) {
            currentTime += timeToPaint;
        } else {
            painters++;
            if (painters > A || timeToPaint > maxTime) {
                return false;
            }
            currentTime = timeToPaint;
        }
    }
    return true;
}

long long minTimeToPaint(vector<int>& boards, int n, int A, int B) {
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += boards[i];
    }
    long long start = 0;
    long long end = sum * 1LL * B;
    long long result = end;

    while (start <= end) {
        long long mid = start + (end - start) / 2;
        if (isPossible(boards, n, A, B, mid)) {
            result = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return result;
}

int main() {
    int n, A, B;
    cout << "Enter number of boards: ";
    cin >> n;
    vector<int> boards(n);
    cout << "Enter lengths of the boards: ";
    for (int i = 0; i < n; i++) {
        cin >> boards[i];
    }
    cout << "Enter number of painters: ";
    cin >> A;
    cout << "Enter time per unit length: ";
    cin >> B;

    cout << "Minimum time to paint all boards: " << minTimeToPaint(boards, n, A, B) << endl;

    return 0;
}
