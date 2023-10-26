#include <iostream>

#define N 10

using namespace std;

int main() {
    int arr[N], dest[N];
    cout << "Inserire " << N << " elementi:\n";

    for (int i = 0; i < N; ++i) {
        cout << "Inserire " << i+1 << "-esimo elemento: ";
        cin >> arr[i];
        dest[i] = arr[i];
    }

    for (int i = 1; i < N; ++i) {
        int elem = dest[i];
        int j = i-1;

        while (j >= 0 && dest[j] > elem) {
            dest[j+1] = dest[j];
            --j;
        }

        dest[j+1] = elem;
    }

    cout << "\nArray ordinato:\n";
    for (int i = 0; i < N; ++i)
        cout << dest[i];    
    cout << endl;

    return 0;
}
