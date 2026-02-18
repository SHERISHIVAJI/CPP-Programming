#include<iostream>
using namespace std;

enum Priority {
    LOW = 10,
    MEDIUM = 20,
    HIGH = 30,
    URGENT = 40
};

int main() {
    Priority task = HIGH;
    cout << "Priority Level: " << task << endl;

    return 0;
}