#include<iostream>
using namespace std;

int main() {
    int number = 87;
    int& referenceVariable = number;

    cout << "Original value inside number variable: " << number << endl;
    cout << "Original value inside reference variable: " << referenceVariable << endl;
    referenceVariable += 89;
    cout << "Updated value inside number variable: " << number << endl;
    cout << "Updated value inside reference variable: " << referenceVariable << endl;

    return 0;
}