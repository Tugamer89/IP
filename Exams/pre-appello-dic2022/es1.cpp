#include <iostream>
#include <cmath>

using namespace std;

struct POINT {
    double x;
    double y;
};

struct CIRCLE {
    POINT center;
    double radius;
};

bool sameArea(const CIRCLE& c1, const CIRCLE& c2) {
    return c1.radius == c2.radius;
}

bool samePerimeter(const CIRCLE& c1, const CIRCLE& c2) {
    return c1.radius == c2.radius;
}

bool overlapCircles(const CIRCLE& c1, const CIRCLE& c2) {
    return c1.radius == c2.radius && c1.center.x == c2.center.x && c1.center.y == c2.center.y;
}

double distance(const POINT& c1, const POINT& c2) {
    return sqrt(pow(c1.x - c2.x, 2) + pow(c1.y - c2.y, 2));
}

bool insideCircles(const CIRCLE& c1, const CIRCLE& c2) {
    double dist = distance(c1.center, c2.center);
    return c2.radius <= c1.radius - dist || c1.radius <= c2.radius - dist;
}

int main() {
    CIRCLE c1 = {{12.2, 6}, 28};
    CIRCLE c2 = {{12.2, 6}, 28};
    CIRCLE c3 = {{4, 2}, 2};
    CIRCLE c4 = {{-4, 192}, 4};

    cout << boolalpha;
    cout << "c1 e c2 hanno la stessa area? " << sameArea(c1, c2) << endl;
    cout << "c1 e c3 hanno la stessa area? " << sameArea(c1, c3) << endl;
    cout << "c1 e c2 hanno lo stesso perimetro? " << samePerimeter(c1, c2) << endl;
    cout << "c1 e c3 hanno lo stesso perimetro? " << samePerimeter(c1, c3) << endl;
    cout << "c1 e c2 si sovrappongono? " << overlapCircles(c1, c2) << endl;
    cout << "c1 e c3 si sovrappongono? " << overlapCircles(c1, c3) << endl;
    cout << "c1 è contenuto in c2 o vice versa? " << insideCircles(c1, c2) << endl;
    cout << "c1 è contenuto in c3 o vice versa? " << insideCircles(c1, c3) << endl;
    cout << "c1 è contenuto in c4 o vice versa? " << insideCircles(c1, c4) << endl;

    return 0;
}
