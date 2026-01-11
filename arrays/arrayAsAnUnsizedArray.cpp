#include<iostream>
using namespace std;

void display(int arr[], int size) {
    cout << "Array elements are: " << endl;
    for(int i = 0; i < size; i++)
        cout << arr[i] << "\t";
    cout << endl;
}

int main() {
    int array[] = {10, 20, 33, 40, 50};
    int size = sizeof(array) / sizeof(array[0]);

    display(array, size);

    return 0;
}