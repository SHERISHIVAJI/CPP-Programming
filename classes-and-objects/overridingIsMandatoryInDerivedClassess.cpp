#include<iostream>
using namespace std;

class Parent {
    public:
        virtual void display() = 0;
};

class Child : public Parent {
    public:
        void display() override {
            cout << "Child Class Implementation is Done!" << endl;
        }
};

int main() {
    Child obj;
    obj.display();

    return 0;
}