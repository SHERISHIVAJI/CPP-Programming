#include<iostream>
using namespace std;

union Testing {
    int int_value;
    float float_value;
    double double_value;
    char char_value;
};

int main() {
    Testing test;
    test.int_value = 46;
    test.float_value = 76.467f;
    test.double_value = 876564.3;
    test.char_value = 'S';

    cout << "***************************** PRINTING AFTER ALL VARIABLES ASSIGNING ********************************" << endl << endl;
    cout << "Integer value: " << test.int_value << endl;
    cout << "Float value: " << test.float_value << endl;
    cout << "Double value: " << test.double_value << endl;
    cout << "Character value: " << test.char_value << endl;

    cout << "**************************** PRINTING EACH VARIABLE AFTER ASSIGNMENT ********************************" << endl << endl;
    test.int_value = 766;
    cout << "Integer value: " << test.int_value << endl;

    test.float_value = 824.45f;
    cout << "Float value: " << test.float_value << endl;

    test.double_value = 8456.53;
    cout << "Double value: " << test.double_value << endl;

    test.char_value = 'A';
    cout << "Character value: " << test.char_value << endl << endl;

    cout << "***************************** PRINTING AFTER ALL VARIABLES MODIFICATION ********************************" << endl << endl;
    cout << "Integer value: " << test.int_value << endl;
    cout << "Float value: " << test.float_value << endl;
    cout << "Double value: " << test.double_value << endl;
    cout << "Character value: " << test.char_value << endl;

    return 0;
}