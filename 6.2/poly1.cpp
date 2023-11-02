#include <iostream>
#include <cmath>

#define MAXN 10000

using namespace std;

struct Point {
    double x;
    double y;

    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }
};

double distance(const Point& p1, const Point& p2) {
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int main() {
    int N;
    Point points[MAXN];

    cout << "Inserire il numero di punti: ";
    cin >> N;
    
    for (int i = 0; i < N; ++i) {
        cout << "Inserire le coordinate (x y) del " << i+1 << "° punto: ";
        cin >> points[i].x >> points[i].y;
    }

    bool isEqui = true;
    bool isClosed = points[0] == points[N-1];
    double lastDist = distance(points[0], points[1]);
    double totalLength = lastDist;

    for (int i = 1; i < N-1; ++i) {
        double dist = distance(points[i], points[i+1]);

        if (dist != lastDist)
            isEqui = false;

        lastDist = dist;
        totalLength += dist;
    }

    cout << "La linea misura " << totalLength;
    if (isClosed && N > 3)
        cout << " ed è chiusa e quindi definisce un poligono " << (isEqui ? "regolare" : "");
    cout << endl;

    return 0;
}
