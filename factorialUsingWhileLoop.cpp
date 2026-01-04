#include<iostream>
using namespace std;

int main() {
    int num, fact = 1, i;
    cout << "Enter a positive integer: ";
    cin >> num;

    i = num;
    while(i > 1) {
        fact *= i;
        i--;
    }

    cout << "Factorial of " << num << " is: " << fact << endl;
    return 0;
}