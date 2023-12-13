#include <iostream>

#define EPSILON 0.0001

using namespace std;

struct Point {
    double x;
    double y;

    bool operator==(const Point& other) const {
        return fabs(x - other.x) < EPSILON && fabs(y - other.y) < EPSILON;
    }
};

int distance(const Point& p1, const Point& p2) {
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int main() {
    cout << "Inserire le coordinate del punto P1: ";
    Point P1;
    cin >> P1.x >> P1.y;

    cout << "Inserire le coordinate del punto P2: ";
    Point P2;
    cin >> P2.x >> P2.y;

    cout << "La distanza tra i due punti è " << distance(P1, P2) << endl;

    return 0;
}
