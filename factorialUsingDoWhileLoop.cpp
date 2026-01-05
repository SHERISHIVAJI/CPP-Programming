#include<iostream>
using namespace std;

int main() {
    int num, fact = 1, i;

    cout << "Enter a number: ";
    cin >> num;

    i = num;
    do {
        fact *= i;
        i--;
    }while(i > 1);
    cout << "The factorial of " << num << " is: " << fact << endl;
    return 0;
}