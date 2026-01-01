#include<iostream>
using namespace std;

int main() {
    double x = 760.986;
    float y = 736647.486;

    int a = static_cast<int>(x);
    int b = static_cast<int>(y);


    cout << "Casted vales of " << x << " in <int> is : " << a << endl;
    cout << "Casted value of " << y << " in <int> is : " << b << endl;

    return 0;
}