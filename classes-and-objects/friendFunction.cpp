#include<iostream>
using namespace std;

class Box {
    private:
        int length;
    public:
        Box() : length(0) {}
        friend int printLength(Box);
};

int printLength(Box b) {
    b.length += 21;
    return b.length;
}

int main() {
    Box b;
    cout << "The length of the box is: " << printLength(b) << endl;
}