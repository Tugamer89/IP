#include <iostream>

using namespace std;

int main() {
    const int N = 15;
    int v[N] = {28, 45, 62, 14, 37, 51, 9, 83, 72, 6, 91, 23, 59, 17, 32}; 
    int greatestIndex;

    for (int i = 0; i < N; ++i) {
        greatestIndex = i;

        for (int j = i+1; j < N; ++j)
            if (v[j] < v[greatestIndex])
                greatestIndex = j;

        swap(v[i], v[greatestIndex]);
    }

    return 0;
}
