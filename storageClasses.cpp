#include<iostream>
using namespace std;

void add() {
    int x, y;
    cout << "Enter two values: ";
    cin >> x >> y;

    auto sum = x + y;

    register int fastAccess = sum;
    cout << "Addition result(auto + register): " << fastAccess << endl;
}

int main() {
    add();
    return 0;
}