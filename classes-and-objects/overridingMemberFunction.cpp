#include<iostream>
using namespace std;

class Shape {
    public:
        virtual void draw() {
            cout << "Drawing a shape" << endl;
        }
};

class Circle : public Shape {
    public:
        void draw() override {
            cout << "Drawing a Circle" << endl;
        }   
};

class Square : public Shape {
    public:
        void draw() override {
            cout << "Drawing a Square" << endl;
        }
};

int main() {
    Shape *shape = new Circle();
    shape->draw();

    shape = new Square();
    shape->draw();

    return 0;
}