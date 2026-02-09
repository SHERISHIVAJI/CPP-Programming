#include<iostream>
using namespace std;

class ComplexNumber {
    private:
        int realPart;
        int imgPart;
    public:
        ComplexNumber(int r = 0, int i = 0) {
            realPart = r;
            imgPart = i;
        }

        void show() {
            cout << realPart << " + i" << imgPart << endl;
        }

        friend ComplexNumber operator + (ComplexNumber c1, ComplexNumber c2);
};

ComplexNumber operator + (ComplexNumber c1, ComplexNumber c2) {
    ComplexNumber obj;
    obj.realPart = c1.realPart + c2.realPart;
    obj.imgPart = c1.imgPart + c2.imgPart;

    return obj;
}

int main() {
    ComplexNumber c1(8, 5), c2(20, 7), c3;
    cout << "The result is: ";
    c3 = c1 + c2;
    c1.show();
    cout << " + ";
    c2.show();
    cout << " = ";
    c3 = c1 + c2;
    c3.show();

    return 0;
}