#include<iostream>
using namespace std;

class RemoveThisPtr {
    public:
        void destroy() {
            cout << "Deleting the current object..." << endl;
            delete this;
        }
};

int main() {
    RemoveThisPtr* rtp = new RemoveThisPtr();
    rtp->destroy();
    
    return 0;
}