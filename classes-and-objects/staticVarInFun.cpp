#include<iostream>
using namespace std;

void staticCounter() {
    static int count = 0;
    count++;
    cout << "Counter = " << count << endl;
}

int main() {
    staticCounter();
    staticCounter();
    staticCounter();
    staticCounter();

    return 0;
}