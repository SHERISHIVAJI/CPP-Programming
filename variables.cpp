#include<iostream>
using namespace std;
const string UNIVERSITY = "JNTUH";
int windowsVersion = 11;

void showDetails() {
    const char* book_name = "The Complete C++";
    string name = "SHERI SHIVAJI";
    int age (21); //Constructor style initialization
    double height {5.7}; //Brace initialization
    char grade = 'O';
    bool isGraduate = true;
    auto data = 486;
    int &ageRef = age;
    const double PI = 3.14159;
    cout << "Name: " << name << endl 
        << "University: " << UNIVERSITY << endl
        << "Book Name: " << book_name << endl
        << "Age: " << ageRef << endl
        << "Height: " << height << endl
        << "Grade: " << grade << endl
        << "Graduated: " << (isGraduate ? "Yes" : "No") << endl
        << "Windows Version: " << windowsVersion << endl
        << "Constant PI Value: " << PI;
}

int main() {
    showDetails();

    return 0;
}