#include<iostream>
using namespace std;

int main() {
    char ch = 'S';
    char digit = '8';
    char special_char = '*';

    cout << "Character: " << ch << endl;
    cout << "Digit: " << digit << endl;
    cout << "Special character: " << special_char << endl << endl;

    cout << "******************************* ASCII VALUES ************************" << endl;
    cout << "The ASCII Value of " << ch << " is: " << int(ch) << endl;
    cout << "The ASCII Value of " << digit << " is: " << int(digit) << endl;
    cout << "The ASCII Value of " << special_char << " is: " << int(special_char) << endl;

    return 0;
}