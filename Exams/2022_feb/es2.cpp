#include <iostream>

using namespace std;

int CountOccurrences(int A[], int size, int val) {
    if (size == 0)
        return 0;

    return (A[size-1] == val) + CountOccurrences(A, size-1, val);
}

int main() {
    int a[] = {1, 23, 52, 1, 1, 9, -9, 0, 1};

    cout << "Le occorrenze di 1 sono " << CountOccurrences(a, 9, 1) << endl;
    cout << "Le occorrenze di 18 sono " << CountOccurrences(a, 9, 18) << endl;
    cout << "Le occorrenze di -9 sono " << CountOccurrences(a, 9, -9) << endl;

    return 0;
}
