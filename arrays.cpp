#include<iostream>
using namespace std;

int main() {
    //1-D ( One Dimensional Array)
    int a[5] = { 10, 20, 30, 40, 50 };
    cout << "One-Dimensional Array:";
    for(int i = 0; i < 5; i++) 
        cout << " " << a[i];
    
    cout << "\n\n";
    //2-D (Two-Dimensional Array --> Multi-Dimensional Array)
    int b[2][3] = {
        {10, 10, 10},
        {20, 20, 20}
    };
    cout << "(Multi-Dimensional Array) Two-Dimensional Array:" << endl;
    for(int row = 0; row < 2; row++) {
        for(int col = 0; col < 3; col++)
            cout << " " << b[row][col];
        cout << endl;
    }

    cout << endl;
    // Dynamic Array (Size taken from the user)
    int size;
    cout << "Enter the size of the dynamic array: ";
    cin >> size;

    int *c = new int[size];
    for(int i = 0; i < size; i++) {
        cout << "Enter c[" << i << "]: ";
        cin >> c[i];
    }

    cout << "Dynamic Array:";
    for(int i = 0; i < size; i++) 
        cout << " " << c[i];
    
    delete[] c;
    return 0;
}