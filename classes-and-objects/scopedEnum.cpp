#include<iostream>
using namespace std;

enum class Color {
    RED,
    YELLOW,
    WHITE
};

int main() {
    Color c = Color::YELLOW;

    if ( c == Color::YELLOW) {
        cout << "The color is YELLOW" << endl;
    }

    cout << "Integer value of color: " << static_cast<int>(c) << endl;

    return 0;
}