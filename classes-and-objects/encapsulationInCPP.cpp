#include<iostream>
using namespace std;

class Rectangle {
    private:
        int len, bre;
    public:
        Rectangle(int l, int b) {
            len = l;
            bre = b;
        }
    int getArea() {
        return len * bre;
    }
};

int main() {
    Rectangle rect(12, 8);
    cout << "The area of rectangle is: " << rect.getArea();

    return 0;
}