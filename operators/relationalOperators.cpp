#include<iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two values\n" << endl;
    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;

    cout << "== operator: " << (num1 == num2) << endl;
    cout << "> operator: " << (num1 > num2) << endl;
    cout << ">= operator: " << (num1 >= num2) << endl;
    cout << "< operator: " << (num1 < num2) << endl;
    cout << "<= operator: " << (num1 <= num2) << endl;
    cout << "!= operator: " << (num1 != num2) << endl;

    return 0;
}