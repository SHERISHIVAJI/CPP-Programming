#include<iostream>
using namespace std;

extern int num;
void display();

int main() {
    cout << num << endl;
    display();
    return 0;
}