#include <iostream>

using namespace std;

int CountOccurrences(int A[], int size, int val) {
    int occs = 0;

    for (int i = 0; i < size; ++i)
        if (A[i] == val)
            ++occs;

    return occs;
}

int main() {
    int a[] = {1, 23, 52, 1, 1, 9, -9, 0, 1};

    cout << "Le occorrenze di 1 sono " << CountOccurrences(a, 9, 1) << endl;

    return 0;
}
