#include<iostream>
using namespace std;

void printArrayElements(int array[5]);

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int array[5] = {15, 25, 35, 45, 55};

    printArrayElements(arr);
    printArrayElements(array);

    return 0;
}

void printArrayElements(int array[5]) {
    cout << "Printing array elements: " << endl;
    for(int i = 0; i < 5; i++) {
        cout << array[i] << "\t";
    }
    cout << endl;
}