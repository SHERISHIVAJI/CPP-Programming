#include<iostream>
using namespace std;

void display(int (&arr)[5]) {
    cout << "Array elements are: " << endl;
    for(int i = 0; i < 5; i++)
        cout << arr[i] << "\t";
    cout << endl;
}

int main() {
    int array[] = {10, 20, 30, 40, 50};

    display(array);

    return 0;
}