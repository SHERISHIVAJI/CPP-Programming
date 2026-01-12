#include<iostream>
using namespace std;

class Vehicle {
    protected:
        string brand;
    public:
        Vehicle(string b) : brand(b) {}
        void showBrand() const {
            cout << "Brand: " << brand << endl;
        }
};

class Car : public Vehicle {
    private:
        int speed;
    public:
        Car(string b, int s) : Vehicle(b), speed(s) {}
        void shoeDetails() const {
            showBrand();
            cout << "Speed: " << speed << endl;
        }
};

int main() {
    Car myCar("Hundai", 150);
    myCar.shoeDetails();

    return 0;
}