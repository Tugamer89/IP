#include <iostream>

#define MAXN 10000

using namespace std;

int main() {
    int N;
    int arr[MAXN];
    
    cout << "Inserire numero di elementi da inserire: ";
    cin >> N;
    
    for (int i = 0; i < N; ++i) {
        cout << "Inserire " << i+1 << "-esimo elemento: ";
        cin >> arr[i];
    }

    for (int i = 1; i < N; ++i) {
        int elem = arr[i];
        int j;

        for (j = i-1; j >= 0 && arr[j] > elem; --j)
            arr[j+1] = arr[j];

        arr[j+1] = elem;
    }

    cout << "\nArray ordinato:\n";
    for (int i = 0; i < N; ++i)
        cout << arr[i] << " ";    
    cout << endl;    
    
    return 0;
}
