#include<iostream>
using namespace std;

class Base {
    public:
        virtual void display() = 0;
};

void Base :: display() {
    cout << "Pure Virtual Definition" << endl;
}

class Derived : public Base {
    public:
        void display() {
            cout << "Inside the Derived Class" << endl;
        }
};

int main() {
    Derived der;
    der.display();

    return 0;
}