#include<iostream>
using namespace std;

enum Operator {
    ADD,
    SUB
};

int calculate(int a, int b, Operator op) {
    if(op == ADD) {
        return a + b;
    } else {
        return a - b;
    }
}

int main() {
    int result = calculate(10, 20, ADD);

    cout << "Result: " << result << endl;

    return 0;
}