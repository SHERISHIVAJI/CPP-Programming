#include<iostream> 
using namespace std;

int main() {
    int a, b;

    a = 10 + (b = 64);
    cout << "Values of 'a' and 'b' are: " << a << ", " << b << endl;

    return 0;
}