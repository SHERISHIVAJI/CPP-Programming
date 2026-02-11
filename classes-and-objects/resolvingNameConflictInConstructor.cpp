#include<iostream>
using namespace std;

class NameConflict {
    private:
        int num;
    public:
        NameConflict(int num) {
            this->num = num;
            cout << "Constructor called, and the value assigned is: " << this->num << endl;
        }

        NameConflict* setValue(int val) {
            this->num = val;
            return this;
        }

        void display() {
            cout << "Current Value of Num: " << num << endl;
        }
};

int main() {
    NameConflict nc(25);
    nc.setValue(100)->display();

    return 0;
}