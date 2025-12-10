#include<iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter the player score: ";
    cin >> score;

    cout << "sizeof(score) : " << sizeof(score) << endl;
    cout << "sizeof(int) : " << sizeof(int) << endl;
    cout << "sizeof(char) : " << sizeof(char) << endl;
    cout << "sizeof(float) : " << sizeof(float) << endl;
    cout << "sizeof(double) : " << sizeof(double) << endl;
    cout << "sizeof(int[5]) : " << sizeof(int[5]) << endl;
    cout << "sizeof(signed int) : " << sizeof(signed int) << endl;
    cout << "sizeof(unsigned int) : " << sizeof(unsigned int) << endl;
    cout << "sizeof(long) : " << sizeof(long) << endl;
    cout << "sizeof(long int) : " << sizeof(long int) << endl;
    cout << "sizeof(long long int) : " << sizeof(long long int) << endl;
    cout << "sizeof(long double) : " << sizeof(long double) << endl;

    return 0;
}