#include<iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two values\n" << endl;
    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;

    cout << "num1 & num2: " << (num1 & num2) << endl;
    cout << "num1 | num2: " << (num1 | num2) << endl;
    cout << "num1 ^ num2: " << (num1 ^ num2) << endl;
    cout << "~(num1): " << ~num1 << endl;
    cout << "num1 >> 2: " << (num1 >> 2) << endl;
    cout << "num1 << 2: " << (num1 << 2) << endl;

    return 0;
}