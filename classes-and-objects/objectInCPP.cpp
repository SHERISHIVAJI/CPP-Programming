#include<iostream>
using namespace std;

class Car {
    public:
        string brand;
        int speed;
        void showDetails() {
            cout << "Brand: " << brand << "\tSpeed: " << speed << "km/h" << endl;
        }
};

int main() {
    Car car;
    car.brand = "Tesla";
    car.speed = 150;
    car.showDetails();
    return 0;
}