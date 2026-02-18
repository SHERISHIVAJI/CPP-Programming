#include<iostream>
using namespace std;

struct Rectangle {
    int l, w;
};

int main() {
    Rectangle rect = { 10, 15};

    Rectangle* ptr = &rect;

    cout << "The length and width of rectangle: " << ptr->l << ", " << ptr->w << endl;

    return 0;
}