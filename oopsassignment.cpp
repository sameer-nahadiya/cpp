#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Parent class
class CS {
public:
    string name;
    vector<string> coreSubjects;
    vector<int> marks;

    CS(const string& name) : name(name) {
        coreSubjects = {"Data Structures", "Algorithms", "Computer Networks", "Operating Systems", "Database Systems"};
        marks.resize(coreSubjects.size(), 0); 
    }

    void inputMarks() {
        cout << "Enter marks for " << name << " specialization:" << endl;
        for (size_t i = 0; i < coreSubjects.size(); ++i) {
            cout << coreSubjects[i] << ": ";
            cin >> marks[i];
        }
    }

    void displayMarks() {
        cout << "Marks for " << name << " specialization:" << endl;
        for (size_t i = 0; i < coreSubjects.size(); ++i) {
            cout << coreSubjects[i] << ": " << marks[i] << endl;
        }
    }

    void displayCoreSubjects() {
        cout << "Core subjects for " << name << ":" << endl;
        for (const auto& subject : coreSubjects) {
            cout << subject << endl;
        }
    }
};

class AIML : public CS {
public:
    AIML() : CS("AIML") {}
};

class CyberSecurity : public CS {
public:
    CyberSecurity() : CS("CyberSecurity") {}
};

class DataScience : public CS {
public:
    DataScience() : CS("DataScience") {}
};

// Child class for SoftwareEngineering specialization
class SoftwareEngineering : public CS {
public:
    SoftwareEngineering() : CS("SoftwareEngineering") {}
};

// Child class for Bioinformatics specialization
class Bioinformatics : public CS {
public:
