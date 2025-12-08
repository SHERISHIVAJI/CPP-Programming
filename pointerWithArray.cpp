#include<iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int* arrPtr = arr;

    cout << "First Element: " << *arrPtr << endl;
    arrPtr++;
    cout << "Second Element: " << *arrPtr << endl;
    return 0;
}