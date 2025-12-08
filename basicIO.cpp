#include<iostream>
using namespace std;

int main() {
    int age;
    float height;
    string name;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your height: ";
    cin >> height;

    cout << endl << "-----------USER DETAILS----------" << endl;
    cout << "NAME: " << name << endl;
    cout << "AGE: " << age << endl;
    cout << "HEIGHT: " << height ;

    return 0;
}