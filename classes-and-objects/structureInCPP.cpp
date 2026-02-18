#include<iostream>
using namespace std;

struct Student {
    string fName;
    string lName;
    int age;
    float cgpa;
};

int main() {
    Student std;

    std.fName = "Sheri";
    std.lName = "Shivaji";
    std.age = 21;
    std.cgpa = 8.15f;

    cout << "Student Details: " << endl;
    cout << "Full Name: " << std.fName << " " << std.lName << endl;
    cout << "Age: " << std.age << endl;
    cout << "CGPA: " << std.cgpa << endl;

    return 0;
}