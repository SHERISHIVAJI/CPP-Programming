#include<iostream>
using namespace std;

enum Status {
    Success = 200,
    NotFound = 404,
    ServerError = 500
};

int main() {
    Status st = NotFound;
    cout << "Status of your application: " << st << endl;

    return 0;
}