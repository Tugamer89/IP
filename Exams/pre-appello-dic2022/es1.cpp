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
    return c1.radius > dist || c2.radius > dist;
}

int main() {

    return 0;
}
