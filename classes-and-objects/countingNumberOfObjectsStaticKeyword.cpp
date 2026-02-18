#include<iostream>
using namespace std;

class Account {
    public:
        int accNo;
        string name;
        static int count;
        Account(int accNo, string name) {
            this->accNo = accNo;
            this->name = name;
            count++;
        }

        void display() {
            cout << "Account Number: " << accNo << endl;
            cout << "Name: " << name << endl;
        }
};

int Account::count = 0;

int main() {
    Account customer1 = Account(101, "Shivaji");
    Account customer2 = Account(102, "Shiva");
    Account customer3 = Account(103, "Ganesh");
    Account customer4 = Account(104, "Laxmi");

    customer1.display();
    customer2.display();
    customer3.display();
    customer4.display();

    cout << "The total number of objects created = " << Account::count << endl;

    return 0;
}