#include<iostream>
using namespace std;

class Employee {
    public:
        string emp_name;
        int emp_id;

        void setDetails(string name, int id) {
            emp_name = name;
            emp_id = id;
        }

        void displayDetails() {
            cout << "Employee Name: " << emp_name << endl;
            cout << "Employee Id: " << emp_id << endl;
        }
};

void showEmployee(Employee emp) {
    cout << "Inside the showEmployee() function\n";
    cout << "Employee Name: " << emp.emp_name << endl;
    cout << "Employee Id: " << emp.emp_id << endl;
    cout << "Calling displayDetails() function inside showEmployee() function\n";
    emp.displayDetails();
}

int main() {
    Employee emp;
    emp.setDetails("Shivaji", 101);
    emp.displayDetails();

    showEmployee(emp);

    return 0;
}