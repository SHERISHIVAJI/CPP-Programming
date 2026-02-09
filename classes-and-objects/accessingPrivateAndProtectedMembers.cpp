#include<iostream>
using namespace std;

class Accessing {
    private:
        int private_member;
    protected:
        int protected_member;
    public:
        Accessing() : private_member(20), protected_member(25) {}
        friend void friendFunction(Accessing& obj);
};

void friendFunction(Accessing &obj) {
    cout << "Accessing the private member: " << obj.private_member << endl;
    cout << "Accessing the protected member: " << obj.protected_member << endl;
}

int main() {
    Accessing access;
    friendFunction(access);

    return 0;
}