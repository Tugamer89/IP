#include <iostream>

using namespace std;

struct Point {
    double x;
    double y;
};

struct Rect {
    Point top_left;
    Point bottom_right;
}; 

double getArea(const Rect& r) {
    return (r.bottom_right.x - r.top_left.x) * (r.top_left.y - r.bottom_right.y);
}

double min(const double& a, const double& b) {
    return a < b ? a : b;
}

double minArea(const Rect& r1, const Rect& r2) {
    return min(getArea(r1), getArea(r2));
}

int main() {
    Rect r1, r2;

    r1.top_left = {-4, 8};
    r1.bottom_right = {8, -4};
    r2.top_left = {1, 1};
    r2.bottom_right = {2, 0};    

    cout << "L'area minore è " << minArea(r1, r2) << endl;

    return 0;
}
