#include<iostream>
using namespace std;

int main() {
    for(int i = 1; i < 5; i++) {
        for(int j = 1; j < 5; j++) {
            for(int k = 1; k < 5; k++) {
                cout << i << " " << j << " " << k << endl;
                if(i == 2 && j == 2 && k == 2)
                    goto exitLoops;
            }
        }
    }
    exitLoops:
        cout << "Exited all loops!";
    return 0;
}