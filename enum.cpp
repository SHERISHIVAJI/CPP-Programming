#include<iostream>
using namespace std;

enum Suits {
    Diamonds,
    Hearts,
    Spades, 
    Clubs
};

int main() {
    Suits card = Hearts;

    cout << "Card Suit: " << card << endl;

    return 0;
}