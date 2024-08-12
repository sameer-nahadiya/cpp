#include <iostream>

using namespace std;

// Function template for swapping two values
template <typename SW>
void SWAPNIL(SW &z, SW &x) {
    SW temp = z;
    z = x;
    x = temp;
}oops

// Class template for storing and displaying values
template <typename SW>
class MEMORY {
private:
    SW V1;
    SW V2;

public:
    // Constructor to initialize values
    MEMORY(SW val1, SW val2) : V1(val1), V2(val2) {}

    // Function to display values
    void showvalue() {
        cout << "Value 1: " << V1 << ", Value 2: " << V2 << endl;
    }

    // Function to swap values
    void swap() {
        SWAPNIL(V1, V2);
    }
};

int main() {

    int z = 39, x = 45;
    SWAPNIL(z, x);
    cout << "swap ke baad z: " << z << " x: " << x << endl;

    float o = 4.5963, l = 7.7777;
    SWAPNIL(o, l);
    cout << "swap ke baad o: " << o << " l: " << l << endl;

    
    MEMORY<int> intmemory(256, 785);
    intmemory.swap();
    intmemory.showvalue();

    // Using class template to store and swap floats
    MEMORY<float> floatmemory(7.7777, 4.5963);
    floatmemory.swap();
    cout << "swap ke baad ";
    floatmemory.showvalue();

    return 0;
}
