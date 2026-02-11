#include<iostream>
using namespace std;

class Overload {
    int num;
    public:
        Overload(int n): num(n) {}
        Overload& add(int n) {
            this->num += n;
            return *this;
        }

        void print() {
            cout << "Number: " << num << endl;
        }
};

int main() {
    Overload obj(55);
    obj.add(10).print();

    return 0;
}