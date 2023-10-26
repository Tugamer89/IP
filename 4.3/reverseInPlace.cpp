#include <iostream>

#define N 10

using namespace std;

int main() {
    float arr[N];
    cout << "Inserire " << N << " elementi:\n";

    for (int i = 0; i < N; ++i) {
        cout << "Inserire " << i+1 << "-esimo elemento: ";
        cin >> arr[i];
    }

    for (int i = 0; i < N/2; ++i) {
        int tmp = arr[i];
        arr[i] = arr[N-i-1];
        arr[N-i-1] = tmp;
    }

    cout << "\nArray rovesciato:" << endl;
    for (int i = 0; i < N; ++i)
        cout << "arr[" << i << "] è " << arr[i] << endl;    
    
    return 0;
}
