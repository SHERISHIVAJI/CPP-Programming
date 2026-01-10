#include<iostream>
using namespace std;

class MutableSC {
    public:
        int x;
        mutable int y;

        MutableSC() {
            x = 46;
            y = 40;
        }
};

int main() {
    const MutableSC msc;
    cout << "Before modifying the value of y: " << msc.y << endl;
    msc.y = 7689;
    cout << "After modifying the value of y: " << msc.y << endl;
    return 0;
}