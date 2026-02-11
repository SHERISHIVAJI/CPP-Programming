#include<iostream>
using namespace std;

class PassingCurrentObj {
    public:
        void show() {
            cout << "Inside the show() function" << endl;
        }

        void invoke(PassingCurrentObj *obj) {
            cout << "invoke() function start" << endl;
            obj->show();
            cout << "invoke() function end" << endl;
        }

        void execute() {
            cout << "execute() function start" << endl;
            invoke(this);
            cout << "execute() function end" << endl;
        }
};

int main() {
    PassingCurrentObj obj;
    obj.execute();

    return 0;
}