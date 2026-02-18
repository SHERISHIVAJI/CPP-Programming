#include<iostream>
using namespace std;

enum month {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

int main() {
    month m;
    m = Feb;
    cout << "Month: " << m+1 << endl;

    return 0;
}