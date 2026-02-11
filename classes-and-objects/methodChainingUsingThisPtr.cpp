#include<iostream>
using namespace std;

class Chain {
    private:
        int val;
    public:
        Chain& setValue(int v) {
            this->val = v;
            return *this;
        }
        void display() {
            cout << "The value is: " << val << endl;
        }
};

int main() {
    Chain chain;
    chain.setValue(100).display();

    return 0;
}