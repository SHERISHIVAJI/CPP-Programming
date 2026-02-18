#include<iostream>
using namespace std;

struct Point {
    int x, y;
};

int main() {
    Point coordinates[2] = { {10, 20}, {10, 30} };

    cout << "Point p1 coordinates: (x, y) = ( " << coordinates[0].x << ", " << coordinates[0].y << " )" << endl;
    cout << "Point p2 coordinates: (x, y) = ( " << coordinates[1].x << ", " << coordinates[1].y << " )" << endl;

    return 0;
}