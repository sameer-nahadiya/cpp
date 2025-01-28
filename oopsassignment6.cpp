#include <bits/stdc++.h>

using namespace std;

// Template 
template <typename sam>
void sortArray(sam arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                sam temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Custom RAVI class with overloaded comparison operators
class RAVI {
public:
    int day, month, year;

    RAVI(int d = 2, int m = 11, int y = 2005) : day(d), month(m), year(y) {}


    bool operator<(const RAVI &d) const {
        if (year < d.year) return true;
        if (year == d.year && month < d.month) return true;
        if (year == d.year && month == d.month && day < d.day) return true;
        return false;
    }

    bool operator>(const RAVI &d) const {
        return d < *this;
    }

    friend ostream &operator<<(ostream &os, const RAVI &d) {
        os << d.day << "/" << d.month << "/" << d.year;
        return os;
    }
};

int main() {
    int RAM[] = {59, 25, 50, 14, 53, 69};
    int N = sizeof(RAM) / sizeof(RAM[0]);
    sortArray(RAM, N);
    cout << "Sorted int array: ";
    for (int i = 0; i < N; ++i) {
        cout << RAM[i] << " ";
    }
    cout << endl;

    
    float ISRO[] = {4.5f, 3.36f, 9.896f, 1.453f, 5.902f, 6.526f};
    int ISIZE = sizeof(ISRO) / sizeof(ISRO[0]);
    sortArray(ISRO, ISIZE);
    cout << "Sorted float array: ";
    for (int i = 0; i < ISIZE; ++i) {
        cout << ISRO[i] << " ";
    }
    cout << endl;

    
    string NAMES[] = {"rajat ", "rohan", "Ram", "Ronak", "Rohit"};
    int NSIZE = sizeof(NAMES) / sizeof(NAMES[0]);
    sortArray(NAMES, NSIZE);
    cout << "Sorted string array: ";
    for (int i = 0; i < NSIZE; ++i) {
        cout << NAMES[i] << " ";
    }
    cout << endl;

    
    RAVI DATES[] = {RAVI(29, 02, 2005), RAVI(14, 8, 2016), RAVI(7, 7, 2007)};
    int DSIZE = sizeof(DATES) / sizeof(DATES[0]);
    sortArray(DATES, DSIZE);
    cout << "Sorted RAVI array: ";
    for (int i = 0; i < DSIZE; ++i) {
        cout << DATES[i] << " ";
    }
    cout << endl;

    return 0;
}
