#include <iostream>
#include <cmath>

#define N 3

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

int biggestTriangle(const Triangle triangles[N]) {
    int largestAreaIndex = 0;

    for (int i = 1; i < N; ++i)
        if (triangles[i].area > triangles[largestAreaIndex].area)
            largestAreaIndex = i;

    return largestAreaIndex + 1;
}

int main() {
    Triangle triangles[N];

    for (int i = 0; i < N; ++i) {
        cout << "Inserire le coordinate (x y) del primo vertice del " << i+1 << "° triangolo: ";
        cin >> triangles[i].v1.x >> triangles[i].v1.y;
        cout << "Inserire le coordinate (x y) del secondo vertice del " << i+1 << "° triangolo: ";
        cin >> triangles[i].v2.x >> triangles[i].v2.y;
        cout << "Inserire le coordinate (x y) del terzo vertice del " << i+1 << "° triangolo: ";
        cin >> triangles[i].v3.x >> triangles[i].v3.y;

        double sideA = distance(triangles[i].v1, triangles[i].v2);
        double sideB = distance(triangles[i].v2, triangles[i].v3);
        double sideC = distance(triangles[i].v3, triangles[i].v1);

        triangles[i].perimeter = sideA + sideB + sideC;
        double semiPerimeter = triangles[i].perimeter / 2;

        triangles[i].area = sqrt(semiPerimeter * (semiPerimeter - sideA) * (semiPerimeter - sideB) * (semiPerimeter - sideC));
    }

    cout << endl;
    cout << "Il triangolo con l'area maggiore è il " << biggestTriangle(triangles) << "°" << endl;

    return 0;
}
