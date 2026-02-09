#include<iostream>
using namespace std;

class ThisPointer {
    public:
        void show() {
            cout << "This pointer holds: " << this << endl;
        }
};

int main() {
    ThisPointer obj;
    obj.show();

    return 0;
}