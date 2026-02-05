#include<iostream>
using namespace std;

class Parent {
    public:
        Parent() {
            cout << "This is Parent class Constrctor" << endl;
        }
        
        virtual void run() = 0;
};

class Child : public Parent {
    public:
        void run() override {
            cout << "Child class running" << endl;
        }
};

int main() {
    Child obj;
    obj.run();

    return 0;
}

