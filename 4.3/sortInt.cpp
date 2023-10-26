#include <iostream>

#define MAXN 10000

using namespace std;

int main() {
    int N;
    int arr[MAXN], dest[MAXN];
    
    cout << "Inserire numero di elementi da inserire: ";
    cin >> N;
    
    for (int i = 0; i < N; ++i) {
        cout << "Inserire " << i+1 << "-esimo elemento: ";
        cin >> arr[i];
        dest[i] = arr[i];
    }

    for (int i = 1; i < N; ++i) {
        int elem = dest[i];
        int j;

        for (j = i-1; j >= 0 && dest[j] > elem; --j)
            dest[j+1] = dest[j];

        dest[j+1] = elem;
    }

    cout << "\nArray ordinato:\n";
    for (int i = 0; i < N; ++i)
        cout << dest[i];    
    cout << endl;

    return 0;
}
