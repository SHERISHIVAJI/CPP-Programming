#include<iostream>
using namespace std;

namespace Utilities {
    void printMessage() {
        cout << "Hello, welcome to namespace" << endl;
    }
}

int main() {
    Utilities::printMessage();

    return 0;
}