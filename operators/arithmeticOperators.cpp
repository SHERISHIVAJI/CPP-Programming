#include<iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two values\n" << endl;
    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;

    int addition = num1 + num2;
    cout << "Addition: " << addition << endl;

    int subtraction = num1 - num2;
    cout << "Subtraction: " << subtraction << endl;

    int multiplication = num1 * num2;
    cout << "Multiplication: " << multiplication << endl;

    int division = num1 / num2;
    cout << "Division: " << division << endl;

    int modulus = num1 % num2;
    cout << "Modulus: " << modulus << endl;

    int increment = ++num1;
    cout << "Increment: " << increment << endl;

    int decrement = --num2;
    cout << "Decriment: " << decrement << endl;

    return 0;
}