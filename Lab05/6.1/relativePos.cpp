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


int main() {
    cout << "Inserire le coordinate del punto P1: ";
    Point P1;
    cin >> P1.x >> P1.y;

    cout << "Inserire le coordinate del punto P2: ";
    Point P2;
    cin >> P2.x >> P2.y;

    if (P1 == P2)
        cout << "I punti sono uguali" << endl;
    else {
        cout << "Il secondo punto è ";

        if (P2.y > P2.y)
            cout << "in alto ";
        else
            cout << "in basso ";

        if (P2.x > P2.x)
            cout << "a destra ";
        else
            cout << "a sinistra ";

        cout << " rispetto al primo" << endl;
    }

    return 0;
}
