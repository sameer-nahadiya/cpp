#include <iostream>
#include <cmath>

using namespace std;

int pagecount(int n, int p) {
    int front = floor(p / 2); // Calculate number of pages turned from the beginning
    int behind = ceil((n - p) / 2.0); // Calculate number of pages turned from the end
    return min(front, behind); // Return the minimum of the two
}

int main() {
    int n = 6; // Total number of pages
    int p = 5; // Page number to turn to
    int turns = pagecount(n, p);
    cout << "Minimum number of pages to turn: " << turns << endl;
    return 0;
}
