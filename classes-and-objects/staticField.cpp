#include<iostream>
using namespace std;

class Account {
    public:
        int accNo;
        string name;
        static float rateOfInterest;
        Account(int accNo, string name) {
            this->accNo = accNo;
            this->name = name;
        }

        void display() {
            cout << "Account Number: " << accNo << endl;
            cout << "Name: " << name << endl;
            cout << "Rate of Interest: " << rateOfInterest << endl;
        }
};

float Account::rateOfInterest = 7.25f;

int main() {
    Account customer1 = Account(101, "Shivaji");
    Account customer2 = Account(102, "Shiva");

    customer1.display();
    customer2.display();

    return 0;
}