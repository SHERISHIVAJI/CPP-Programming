#include<iostream>
#include<thread>
using namespace std;

thread_local int counter = 0;

void thread_localSC() {
    counter++;
    cout << "Counter = " << counter << endl;
}

int main() {
    thread_localSC();
    thread_localSC();
    thread_localSC();

    return 0;
}