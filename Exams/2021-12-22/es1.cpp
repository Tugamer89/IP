#include <iostream>

using namespace std;

float sum(float A[], int size) {
    if (size == 0)
        return 0;
    return A[size-1] + sum(A, size-1);
}

float avg_aux(float A[], int size, int currentIndex) {
    if (currentIndex == 0)
        return 0;
    return A[currentIndex-1] / size + avg_aux(A, size, currentIndex-1);
}

float avg(float A[], int size) {
    return sum(A, size) / size;
    //return avg_aux(A, size, size);
}

int main() {
    const int N = 5;
    float a[N] = {8, -8, 2, 3, 0};

    cout << "La media è " << avg(a, N) << endl;

    return 0;
}
