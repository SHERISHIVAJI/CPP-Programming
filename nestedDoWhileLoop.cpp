#include<iostream>
using namespace std;

int main() {
    int i = 1;
    do {
        int j = 1;
        cout << "The outer loop iteration count is: " << i << endl;
        do {
            cout << "The inner loop iteration count is: " <<j << endl;
            j++;
        }while(j <= 3);
        cout << endl;
        i++;
    }while(i <= 3);

    return 0;
}