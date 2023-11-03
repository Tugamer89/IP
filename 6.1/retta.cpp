#include <iostream>

#define EPSILON 0.0001

using namespace std;

struct StraightLine {
    double m;
    double q;
};

struct Point {
    double x;
    double y;
};

int main() {
    cout << "Inserire i parametri della retta R: ";
    StraightLine R;
    cin >> R.m >> R.q;

    cout << "Inserire le coordinate del punto P: ";
    Point P;
    cin >> P.x >> P.y;

    cout << "La retta R di equazione y=mx+q ";

    if (fabs(P.y - R.m*P.x - R.q) < EPSILON)
        cout << " passa ";
    else
        cout << " non passa ";

    cout << "per il punto di coordinate " << P.x << " " << P.y << endl;

    return 0;
}
