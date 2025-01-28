
#include <bits/stdc++.h>

using namespace std;

// Base class
class CHILD {
protected:
    int rollNumber;    // Unique number of the student
    string name;       // Name of the student

public:
    //  simple student details ke liye function
    void simpledetails() {
        cout << "Enter roll number:";
        cin >> rollNumber;
        cout << "Enter the name : ";
        cin.ignore();  
        getline(cin, name);
    }

    
    void displaysimpleDetails() {
        cout << "Name of the CHILD is: " << name << endl;
        cout << "Roll Number is: " << rollNumber << endl;
    }
};


class healthdetails : public CHILD {
private:
    float H;   // Height of the student
    float W;   // Weight of the student

public:
    // Function to get physical details of the student
    void gethealthdetails() {
        cout << "Enter H: ";
        cin >> H;
        cout << "Enter W: ";
        cin >> W;
    }

    // Function to display physical details of the student
    void displayhealthDetails() {
        cout << "Height of the student is: " << H << " cm" << endl;
        cout << "Weight of the student is: " << W << " kg" << endl;
    }
};

int main() {
    healthdetails student;

    
    student.simpledetails();
    student.gethealthdetails();

    
    student.displaysimpleDetails();
    student.displayhealthDetails();

    return 0;
}
