#include <bits/stdc++.h>

using namespace std;

class EMPLOYEE
{
private:
    int empNumber;
    string empName;
    float basic;
    float DA;
    float IT;
    float netSalary;

    void calculateNetSalary()
    {
        netSalary = basic + DA - IT;
    }

public:
    void setDetails(int number, string name, float basicSalary, float da, float it)
    {
        empNumber = number;
        empName = name;
        basic = basicSalary;
        DA = da;
        IT = it;
        calculateNetSalary();
    }
    void printDetails()
    {
        cout << "Employee Number: " << empNumber << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Basic Salary: " << basic << endl;
        cout << "Dearness Allowance (DA): " << DA << endl;
        cout << "Income Tax (IT): " << IT << endl;
        cout << "Net Salary: " << netSalary << endl;
    }
};

int main()
{
    EMPLOYEE emp;

    emp.setDetails(10586, "RADHEY", 64640, 14563, 12563);

    emp.printDetails();

    return 0;
}
