#include <iostream>

#define MAXN 10000

using namespace std;

int main() {
    int N;
    float arr[MAXN];

    cout << "Inserire numero di elementi da inserire: ";
    cin >> N;
    
    for (int i = 0; i < N; ++i) {
        cout << "Inserire " << i+1 << "-esimo elemento: ";
        cin >> arr[i];
    }

    for (int i = 0; i < N/2; ++i) {
        float tmp = arr[i];
        arr[i] = arr[N-i-1];
        arr[N-i-1] = tmp;
    }

    cout << "\nArray rovesciato:" << endl;
    for (int i = 0; i < N; ++i)
        cout << "arr[" << i << "] è " << arr[i] << endl;    
    
    return 0;
}
