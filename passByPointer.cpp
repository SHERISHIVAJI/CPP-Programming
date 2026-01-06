#include<iostream>
using namespace std;

void update(int *ptr) {
    *ptr = 50;
}

int main() {
    int num = 10;
    cout << "Before: " << num << endl;
    update(&num);
    cout << "After: " << num << endl;
    return 0;
}