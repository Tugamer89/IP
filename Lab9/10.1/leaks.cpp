#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    const int N = 5;
    int* v;
    int* p;

    v = new int[N];
    p = new int[N];

    switch(argv[1][0] - '0') {
    case 1:
        delete[] v;
        delete[] p;
        break;
    case 2:
        v = new int[N];
        delete[] v;
        delete[] p;
        break;
    case 3:
        p = v;
        delete[] v;
        break;
    case 4:
        delete v;
        delete p;
    }

    return 0;
}
