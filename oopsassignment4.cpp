w

#include <bits/stdc++.h>

using namespace std;

int main() {
    try {
        int yadav;
        cout << "Enter a number (1 for int, 2 for double, 3 for string): ";
        cin >> yadav;

        if (yadav == 1) {
            
            throw 100;
        } else if (yadav == 2) {
            
            throw 200.5;
        } else if (yadav == 3) {
            
            throw string("Error aa Gya");
        } else {
            
            throw 'X';
        }
    }
    catch (int e) {
        cout << "Galat integer " << e << endl;
    }
    catch (double e) {
        cout << "Bad double " << e << endl;
    }
    catch (string &e) {
        cout << "bad string " << e << endl;
    }
    catch (...) {
        cout << "bad generic expression" << endl;
    }

    cout << "Program continues after exception handling." << endl;

    return 0;
}
