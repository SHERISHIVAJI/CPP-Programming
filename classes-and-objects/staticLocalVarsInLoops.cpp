#include<iostream>
using namespace std;

void loopCounter() {
    static int count = 0;
    for(int i = 0; i < 3; i++) {
        count++;
        cout << "Loop Iteration: " << count << endl;
    }
}

int main() {
    loopCounter();
    loopCounter();
    loopCounter();

    return 0;
}