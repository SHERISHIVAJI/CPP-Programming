#include<iostream>
using namespace std;

class Bike {
    private:
        string brand;
    public:
        Bike(string b) {
            brand = b;
        }

        void showBrand() {
            cout << "Bike brand: " << brand << endl;
        }
};

int main() {
    Bike bike1("KTM");
    Bike bike2("Royal Enfield");

    bike1.showBrand();
    bike2.showBrand();

    return 0;
}