#include <iostream>
#include <cmath>

using namespace std;

struct Punto {
    double x, y;
};

double dist(const Punto& p1, const Punto& p2) {
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int main() {
    const int N = 3;
    Punto points[N];

    for (int i = 0; i < N; ++i) {
        cout << "Inserire le coordinate (x y) del " << i+1 << "° punto: ";
        cin >> points[i].x >> points[i].y;
    }

    double tot = 0;

    for (int i = 0; i < N-1; ++i)
        tot +=  dist(points[i], points[i+1]);

    cout << "La lunghezza della spezzata è " << tot << endl;

    return 0;
}
