#include<iostream>
using namespace std;

struct Student {
    int Id;
    char name[50];
    float grade;
};

void displayStudent(const Student& std) {
    cout << "Student Id: " << std.Id << endl;
    cout << "Student name: " << std.name << endl;
    cout << "Studentn grade: " << std.grade << endl;
}

int main() {
    Student std1 = { 10, "Shivaji", 8.15};
    displayStudent(std1);
    return 0;
}