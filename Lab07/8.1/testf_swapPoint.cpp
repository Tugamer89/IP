#include <iostream>

using namespace std;

struct Point {
    double x;
    double y;
};

void swapPoint(Point& P1, Point& P2){
    Point tmp = P1;
    P1.x = P2.x;
    P1.y = P2.y;
    P2 = tmp;
}

void printPoint(const Point& P){
    cout << "P(" << P.x << ", " << P.y << ")" << endl;
}

int main() {
    Point P1, P2;
    P1 = {0.23, 23.5};
    P2 = {-12.6, 41};

    printPoint(P1);
    printPoint(P2);

    swapPoint(P1, P2);
    
    printPoint(P1);
    printPoint(P2);

    return 0;
}
