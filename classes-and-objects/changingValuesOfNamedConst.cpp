#include<iostream>
using namespace std;

enum Color {
    RED = 10,
    GREEN,
    Orange
};

int main() {
    Color color = GREEN;
    cout << "Signal Status: " << color << endl;

    return 0;
}