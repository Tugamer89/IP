#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    double x;
    double y;

    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }
};

struct Rect {
    Point topLeft;
    Point bottomRight;

    bool operator==(const Rect& other) const {
        return topLeft == other.topLeft && bottomRight == other.bottomRight;
    }
};

bool isRectContained(const Rect& outer, const Rect& inner) {
    return outer.topLeft.x <= inner.topLeft.x &&
           outer.topLeft.y >= inner.topLeft.y &&
           outer.bottomRight.x >= inner.bottomRight.x &&
           outer.bottomRight.y <= inner.bottomRight.y;
}

int main() {
    Rect rect1, rect2;

    cout << "Inserire coordinate (x y) nel punto in alto a sinistra del primo rettangolo: ";
    cin >> rect1.topLeft.x >> rect1.topLeft.y;
    cout << "Inserire coordinate (x y) nel punto in basso a destra del primo rettangolo: ";
    cin >> rect1.bottomRight.x >> rect1.bottomRight.y;

    cout << "Inserire coordinate (x y) nel punto in alto a sinistra del secondo rettangolo: ";
    cin >> rect2.topLeft.x >> rect2.topLeft.y;
    cout << "Inserire coordinate (x y) nel punto in basso a destra del secondo rettangolo: ";
    cin >> rect2.bottomRight.x >> rect2.bottomRight.y;


    if (rect1 == rect2)
        cout << "I due rettangoli combaciano" << endl;
    else if (isRectContained(rect1, rect2))
        cout << "Il secondo rettangolo è contenuto nel primo" << endl;
    else if (isRectContained(rect2, rect1))
        cout << "Il primo rettangolo è contenuto nel secondo" << endl;
    else
        cout << "Nessuno dei due rettangoli è contenuto nell'altro" << endl;

    return 0;
}
