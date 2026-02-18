#include<iostream>
using namespace std;

typedef struct {
    int id;
    string name;
    float gpa;
} Student;

int main() {
    Student std;

    std.id = 101;
    std.name = "Sheri Shivaji";
    std.gpa = 8.15;

    cout << "Student Details: " << endl;
    cout << "Student Id: " << std.id << endl;
    cout << "Student Name: " << std.name << endl;
    cout << "Student GPA: " << std.gpa << endl;

    return 0;
}