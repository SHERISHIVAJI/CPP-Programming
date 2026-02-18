#include<iostream>
using namespace std;

enum Day {
    Sun, Mon, Tue, Wed, Thu, Fri, Sat
};

int main() {
    Day today = Wed;
    cout << "Numeric value of today: " << today << endl;

    if(today == Wed) {
        cout << "It is a mid-day of the week" << endl;
    }

    return 0;
}