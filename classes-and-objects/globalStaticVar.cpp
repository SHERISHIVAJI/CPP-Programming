#include<iostream>
using namespace std;

static int globalCounter = 0;
void incrementCounter() {
    globalCounter++;
    cout << "The Global Counter: " << globalCounter << endl;
}

int main() {
    incrementCounter();
    incrementCounter();

    return 0;
}