#include<iostream>
using namespace std;

int studentAge = 21;

double salary_2026 = 450000.56;

const int MAX_LIMIT = 100;

int myVar = 32478;
int MyVar = 3276;

string employee_Name = "Shivaji";

void displayStudentDetails() {
    cout << "Student age: " << studentAge << endl;
}

int main() {
    cout << "Student Age: " << studentAge << endl;
    cout << "Salary: $" << salary_2026 << endl;
    cout << "Max limit: " << MAX_LIMIT << endl;
    cout << "myVar: " << myVar << endl;
    cout << "MyVar(Capitalized): " << MyVar << endl;
    cout << "Employee Name: " << employee_Name << endl;

    displayStudentDetails();
    return 0;
}