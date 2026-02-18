#include<iostream>
using namespace std;

namespace NamespaceFunc {
    static int count = 0;
    void increment() {
        count++;
        cout << "Count Number: " << count << endl;
    }
}

int main() {
    NamespaceFunc::increment();
    NamespaceFunc::increment();
    NamespaceFunc::increment();

    return 0;
}