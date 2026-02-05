#include<iostream>
using namespace std;

class Dice {
    public:
        double length;
        double breadth;
        double height;

        double getVolume(void);
        void setLength(double l);
        void setBreadth(double b);
        void setHeight(double h);
};

double Dice::getVolume() {
    return length * breadth * height;
}

void Dice::setLength(double l) {
    length = l;
}

void Dice::setBreadth(double b) {
    breadth = b;
}

void Dice::setHeight(double h) {
    height = h;
}

int main() {
    Dice dice1;
    Dice dice2;
    double volume = 0.0;

    dice1.setLength(6);
    dice1.setBreadth(7);
    dice1.setHeight(5);

    dice2.setLength(12);
    dice2.setBreadth(13);
    dice2.setHeight(10);

    volume = dice1.getVolume();
    cout <<"Volume of Dice1(Length = " << dice1.length << ", Breadth = " << dice1.breadth << ", Height = " << dice1.height << " ) : " << volume << endl;

    volume = dice2.getVolume();
    cout <<"Volume of Dice2(Length = " << dice2.length << ", Breadth = " << dice2.breadth << ", Height = " << dice2.height << " ) : " << volume << endl;

    return 0;
}