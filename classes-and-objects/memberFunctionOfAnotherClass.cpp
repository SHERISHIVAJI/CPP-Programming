#include<iostream>
using namespace std;

class First;

class Last {
    public:
        void show(First first);
};

class First {
    private:
        int val;
    public:
        First() : val(356) {}
        friend void Last::show(First obj);
};

void Last::show(First first) {
    cout << "Private value of class First accessed from class Last: " << first.val << endl;
}

int main() {
    First first;
    Last last;

    last.show(first);

    return 0;
}