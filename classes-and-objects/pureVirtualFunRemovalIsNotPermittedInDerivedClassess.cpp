#include<iostream>
using namespace std;

class Parent {
    public: 
        virtual void show() = 0;
};

class Child : public Parent {

};

int main() {
    return 0;
}