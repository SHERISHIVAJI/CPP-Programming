#include<iostream>
using namespace std;

int main() {
    int int_type_data_1, int_type_data_2 = -7876838;
    unsigned int unsigned_int_type_data_1, unsigned_int_type_data_2 = 8765, unsigned_int_type_data_3 = -5643;
    short int short_int_type_data_1, short_int_type_data_2 = 3656, short_int_type_data_3 = -5456;
    long int long_int_type_data_1, long_int_type_data_2 = 554546546, long_int_type_data_3 = -765754345;

    cout << "********************************** INT *******************************" << endl;
    cout << "\"int\" default value: " << int_type_data_1 << endl;
    cout << "\"int\" value: " << int_type_data_2 << endl;

    cout << "********************************* UNSIGNED INT ***************************" << endl;
    cout << "\"unsigned int\" default value: " << unsigned_int_type_data_1 << endl;
    cout << "\"unsigned int\" value: " << unsigned_int_type_data_2 << endl;
    cout << "\"unsigned int\" negative value: " << unsigned_int_type_data_3 << endl;

    cout << "********************************* SHORT INT ******************************" << endl;
    cout << "\"short int\" default value: " << short_int_type_data_1 << endl;
    cout << "\"short int\" positive value: " << short_int_type_data_2 << endl;
    cout << "\"short int\" negative value: " << short_int_type_data_3 << endl;

    cout << "********************************* LONG INT *******************************" << endl;
    cout << "\"long int\" default value: " << long_int_type_data_1 << endl;
    cout << "\"long int\" positive value: " << long_int_type_data_2 << endl;
    cout << "\"long int\" negative value: " << long_int_type_data_3 << endl;

    return 0;
}