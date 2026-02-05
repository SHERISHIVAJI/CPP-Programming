#include<iostream>
using namespace std;

class Shape {
    public:
        virtual double area() = 0;
        virtual ~Shape() {}
};

class Circle : public Shape {
    double radius;
    public:
        Circle(double r) : radius(r) {}
        double area() override {
            return 3.14 * radius * radius;
        }
};

class Rectangle : public Shape {
    double length, width;
    public:
        Rectangle(double l, double w) : length(l), width(w) {}
        double area() override {
            return length * width;
        }
};

class Triangle : public Shape {
    double base, height;
    public: 
        Triangle(double b, double h) : base(b), height(h) {}
        double area() override {
            return 0.5 * base * height;
        }
};
 
int main() {
    Shape* shape[3];
    shape[0] = new Circle(6);
    shape[1] = new Rectangle(13, 15);
    shape[2] = new Triangle(6, 9);

    cout << "Area of the Circle is: " << shape[0]->area() << endl;
    cout << "Area of the Rectangle is: " << shape[1]->area() << endl;
    cout << "Area of the Triangle is: " << shape[2]->area() << endl;

    for(int i = 0; i < 3; i++) 
        delete shape[i];

    return 0;
}