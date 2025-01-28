#include <bits/stdc++.h>

using namespace std;

class STUDENT {
private:
    string sname;    
    int marks[3];    
    int Sum;       
    int tmax;        
    float average;   

public:
    
    void assign() {
        cout << "Enter the name of the student: ";
        getline(cin, sname);

        cout << "Enter the maximum marks for each subject: ";
        cin >> tmax;

        cout << "Enter the marks for 3 subjects:\n";
        Sum = 0;
        for (int i = 0; i < 3; i++) {
            cout << "Subject " << (i + 1) << ": ";
            cin >> marks[i];
        }
    }

    
    void compute() {
        Sum = 0;
        for (int i = 0; i < 3; i++) {
            Sum += marks[i];
        }
        average = static_cast<float>(Sum) / 3;
    }

    // Function to display the data
    void display() {
        cout << "\nStudent Name: " << sname << endl;
        cout << "Marks in 3 subjects: ";
        for (int i = 0; i < 3; i++) {
            cout << marks[i] << " ";
        }
        cout << "\nTotal Marks Obtained: " << Sum << " out of " << (tmax * 3) << endl;
        cout << "Average Marks: " << average << endl;
    }
};

int main() {
    STUDENT student;

    student.assign();  
    student.compute(); 
    student.display(); 

    return 0;
}
