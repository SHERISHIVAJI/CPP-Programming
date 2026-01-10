#include<iostream>
using namespace std;

void registerStorage() {
    register int count = 5;
    for(register int i = 0; i < 10; i++) {
        count += i;
        cout << "i = " << i << ", count = " << count << endl;
    }
}

int main() {
    registerStorage();
    return 0;
}