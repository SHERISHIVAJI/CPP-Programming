#include<iostream>
using namespace std;

int fact(int);

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int res = fact(num);
    cout << "The factorial of " << num << " is: " << res << endl;
    return 0;
}

int fact(int n) {
    if(n > 1) 
        return n * fact(n - 1);
    else 
        return 1;
}