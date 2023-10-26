#include <iostream>

#define N 10

using namespace std;

int main() {
    int arr[N];
    cout << "Inserire " << N << " elementi:\n";

    for (int i = 0; i < N; ++i) {
        cout << "Inserire " << i+1 << "-esimo elemento: ";
        cin >> arr[i];
    }

    for (int i = 1; i < N; ++i) {
        int elem = arr[i];
        int j = i-1;

        while (j >= 0 && arr[j] > elem) {
            arr[j+1] = arr[j];
            --j;
        }

        arr[j+1] = elem;
    }

    cout << "\nArray ordinato:\n";
    for (int i = 0; i < N; ++i)
        cout << arr[i] << " ";    
    cout << endl;    
    
    return 0;
}
