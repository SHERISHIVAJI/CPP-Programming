#include<iostream>
using namespace std;

class Student {
    private:
        string name;
        int age;
    public:
        Student(string n, int a) : name(n), age(a) {}
        void display() const{
            cout << "Name: " << name << "\tAge: " << age << endl;
        }
};

int main() {
    Student std("Shivaji", 21);
    std.display();

    return 0;
}