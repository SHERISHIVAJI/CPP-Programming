#include<iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter the player score: ";
    cin >> score;

    string result = (score >= 75) ? "Won" : "Lose";
    cout << "The status of the match: " << result << endl;

    return 0;
}