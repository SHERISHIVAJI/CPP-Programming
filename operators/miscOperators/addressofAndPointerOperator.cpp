#include<iostream>
using namespace std;

int main() {
    int num = 86;
    int var;
    int* ptr = &num;
    cout << "The address of the variable num is: " << ptr << endl;
    cout << "The address of the variable var is: " << &var << endl;

    return 0;
}