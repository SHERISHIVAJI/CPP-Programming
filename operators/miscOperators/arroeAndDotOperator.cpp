#include<iostream>
using namespace std;

class Test {
    public: 
        int num = 487;
};

int main() {
    Test obj;
    Test *ptr = &obj;
    cout << "Using dot(.) operator: " << obj.num << endl;
    cout << "Using arrow(->) operator: " << ptr->num << endl;

    return 0;
}