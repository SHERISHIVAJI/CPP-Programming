#include<iostream>
using namespace std;

inline int addition(int n1, int n2) {
    return (n1 + n2);
}

int main() {
    int num1, num2;
    cout << "Enter the values: ";
    cin >> num1 >> num2;

    cout << "Addition of " << num1 << ", " << num2 << " is: " << addition(num1, num2) << endl;
    return 0;
}