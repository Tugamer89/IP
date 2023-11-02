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
    string poliType;

    for (int i = 1; i < N-1; ++i) {
        double dist = distance(points[i], points[i+1]);

        if (dist != lastDist)
            isEqui = false;

        lastDist = dist;
        totalLength += dist;
    }

    switch (N-1) {
    case 3:
        poliType = "triangolo";
        break;
    case 4:
        poliType = "rettangolo";
        break;
    case 5:
        poliType = "pentagono";
        break;
    case 6:
        poliType = "esagono";
        break;
    case 7:
        poliType = "ettagono";
        break;
    case 8:
        poliType = "ottagono";
        break;
    case 9:
        poliType = "ennagono";
        break;
    case 10:
        poliType = "decagono";
        break;
    case 11:
        poliType = "endecagono";
        break;
    case 12:
        poliType = "dodecagono";
        break;
    case 13:
        poliType = "tridecagono";
        break;
    case 14:
        poliType = "tetradecagono";
        break;
    case 15:
        poliType = "pentadecagono";
        break;
    case 16:
        poliType = "esadecagono";
        break;
    case 17:
        poliType = "eptadecagono";
        break;
    case 18:
        poliType = "ottadecagono";
        break;
    case 19:
        poliType = "ennadecagono";
        break;
    case 20:
        poliType = "icosagono";
        break;
    case 21:
        poliType = "endeicosagono";
        break;
    case 22:
        poliType = "doicosagono";
        break;
    case 23:
        poliType = "triaicosagono";
        break;
    case 24:
        poliType = "tetraicosagono";
        break;
    case 25:
        poliType = "pentaicosagono";
        break;
    case 26:
        poliType = "esaicosagono";
        break;
    default:
        poliType = "poligono";
    }

    cout << "La linea misura " << totalLength;
    if (isClosed && N > 3)
        cout << " ed è chiusa e quindi definisce un " << poliType << " " << (isEqui ? "regolare" : "");
    cout << endl;

    return 0;
}
