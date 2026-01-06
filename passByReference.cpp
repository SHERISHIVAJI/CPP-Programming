#include<iostream>
using namespace std;

void square(int &num) {
    num *= num;
}

int main() {
    int x = 5;
    square(x);
    cout << "The square is: " << x;
    return 0;
}