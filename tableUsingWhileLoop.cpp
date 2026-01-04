#include<iostream>
using namespace std;

int main() {
    int start, end, num, i;
    cout << "Enter the starting number: ";
    cin >> start;
    cout << "Enter the ending number: ";
    cin >> end;

    num = start;
    while (num <= end)
    {
        i = 1;
        cout << "Multiplication table of " << num << " is: " << endl;
        while (i <= 10)
        {
            cout << num << " x " << i << " = " << num * i << endl;
            i++;
        }

        cout << endl;
        num++;        
    }

    return 0;    
}