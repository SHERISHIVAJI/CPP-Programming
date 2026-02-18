#include<iostream>
using namespace std;

struct Multiplication {
    int num1, num2;

    int multiply() {
        return num1 * num2;
    }
};

int main() {
    Multiplication mul;
    mul.num1 = 10;
    mul.num2 = 5;

    int result = mul.multiply();

    cout << "The multiplication of " << mul.num1 << " and " << mul.num2 << " is: " << result << endl;

    return 0;
}