#include<iostream>
#include<thread>
using namespace std;

void incrementCounter() {
    static int count = 0;
    count++;
    cout << "Counter: " << count << endl;
}

int main() {
    thread t1(incrementCounter);
    thread t2(incrementCounter);

    t1.join();
    t2.join();

    return 0;
}