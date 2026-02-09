#include<iostream>
using namespace std;

class Test {
    private:
        int num;
    public:
        void set(int num) {
            this->num = num;
        }

        void print() {
            cout << "The value is: " << num;
        }
};

int main() {
    Test test;

    test.set(100);
    test.print();

    return 0;
}