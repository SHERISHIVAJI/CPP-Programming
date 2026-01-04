#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};

    for(int& num : numbers) 
        num += 5;

    for(int num : numbers)
        cout << num << " ";
    cout << endl;
    return 0;
}