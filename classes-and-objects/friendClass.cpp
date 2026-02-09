#include<iostream>
using namespace std;

class First {
    int num = 98;
    friend class Last;
};

class Last {
    public:
        void display(First &obj) {
            cout << "The value of num is: " << obj.num << endl;
        }
};

int main() {
    First f;
    Last l;
    l.display(f);

    return 0;
}