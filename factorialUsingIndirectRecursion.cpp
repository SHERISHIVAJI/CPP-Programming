#include<iostream>
using namespace std;

int factA(int);
int factB(int);

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    cout << "The factorial of " << num << " is: " << factA(num) << endl;
    return 0;
}

int factA(int num) {
    if(num == 1) return 1;
    return num * factB(num - 1);
}

int factB(int num) {
    if(num == 1) return 1;
    return num * factA(num - 1);
}