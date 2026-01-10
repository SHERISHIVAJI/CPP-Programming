#include<iostream>
using namespace std;

void func();

static int counter = 8;

void func() {
    static int x = 2;
    x++;
    cout << "x = " << x << ", counter = " << counter << endl;
}

int main() {
    while(counter--) {
        func();
    }

    return 0;
}