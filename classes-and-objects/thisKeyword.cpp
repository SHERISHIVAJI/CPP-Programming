#include<iostream>
using namespace std;

class Employee {
    public:
        int id;
        string name;
        float salary;
        Employee(int id, string name, float salary) {
            this->id = id;
            this->name = name;
            this->salary = salary;
        }

        void display() {
            cout << "Employee Details: " << endl;
            cout << "Id : " << id << ", Name : " << name << ", Salary : " << salary << endl;
        }
};

int main() {
    Employee emp1 = Employee(101, "Shivaji", 600000.00);
    Employee emp2 = Employee(102, "Shiva" , 670000.90);

    emp1.display();
    emp2.display();

    return 0;
}