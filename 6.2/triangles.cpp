#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    int x;
    int y;
};

struct Triangle {
    Point v1;
    Point v2;
    Point v3;
    double perimeter;
    double area;
};

double distance(const Point& p1, const Point& p2) {
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int main() {
    Triangle triangle;

    cout << "Inserire le coordinate (x y) del primo vertice del triangolo: ";
    cin >> triangle.v1.x >> triangle.v1.y;
    cout << "Inserire le coordinate (x y) del secondo vertice del triangolo: ";
    cin >> triangle.v2.x >> triangle.v2.y;
    cout << "Inserire le coordinate (x y) del terzo vertice del triangolo: ";
    cin >> triangle.v3.x >> triangle.v3.y;

    double sideA = distance(triangle.v1, triangle.v2);
    double sideB = distance(triangle.v2, triangle.v3);
    double sideC = distance(triangle.v3, triangle.v1);

    triangle.perimeter = sideA + sideB + sideC;
    triangle.area = sqrt(triangle.perimeter/2 * (triangle.perimeter/2 - sideA) * (triangle.perimeter/2 - sideB) * (triangle.perimeter/2 - sideC));

    cout << endl;
    cout << "L'area del triangolo inserito è " << triangle.area << " unità quadrate" << endl;
    cout << "Il perimetro del triangolo inserito è " << triangle.perimeter << " unità" << endl;

    return 0;
}
