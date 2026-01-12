#include<iostream>
using namespace std;

class ATM {
    public:
        virtual void withdrawMoney(double amount) = 0;
};

class BankATM : public ATM {
    public:
        void withdrawMoney(double amount) override {
            cout << "Processing withdrawal of $" << amount << endl; 
        }
};

int main() {
    ATM* atm = new BankATM();
    atm -> withdrawMoney(89.00);

    return 0;
}