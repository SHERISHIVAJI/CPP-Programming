#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    float float_type_default, float_type_positive = 64242.445236f, float_type_negative = -786543.897654f;
    double double_type_default, double_type_positive = 76.7665645434, double_type_negative = -876543.877654;
    long double long_double_type_default, long_double_type_positive = 58768798.24565543L, long_double_type_negative = -8765487654.876543456L;

    cout << fixed << setprecision(10);
    cout << "******************************* FLOAT TYPE *******************************" << endl;
    cout << "\"float\" default value: " << float_type_default << endl;
    cout << "\"float\" positive value: " << float_type_positive << endl;
    cout << "\"float\" negative value: " << float_type_negative << endl << endl;

    cout << "******************************* DOUBLE TYPE ******************************" << endl;
    cout << "\"double\" default value: " << double_type_default << endl;
    cout << "\"double\" positive value: " << double_type_positive << endl;
    cout << "\"double\" negative value: " << double_type_negative << endl << endl;

    cout << "********************************* LONG DOUBLE TYPE ***************************" << endl;
    cout << "\"long double\" default value: " << long_double_type_default << endl;
    cout << "\"long double\" positive value: " << long_double_type_positive << endl;
    cout << "\"long double\" negative value: " << long_double_type_negative << endl;

    return 0;
}