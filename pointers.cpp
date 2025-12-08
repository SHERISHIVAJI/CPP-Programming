#include<iostream>
using namespace std;

int main() {
    int number = 348;
    int* ptr = &number;

    cout << "The value inside \"number\" variable is: " << number << endl;
    cout << "The address of \"number\" variable is: " << &number << endl;
    cout << "The address inside pointer variable is: " << ptr << endl;
    cout << "The value at pointer variable is: " << *ptr << endl;
    cout << "The address of pointer variable is: " << &ptr;

    return 0;
}