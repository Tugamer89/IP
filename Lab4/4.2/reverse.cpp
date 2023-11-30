#include <iostream>

#define MAXN 10000

using namespace std;

int main() {
    int N;
    int source[MAXN], dest[MAXN];

    cout << "Inserire numero di elementi da inserire: ";
    cin >> N;
    
    for (int i = 0; i < N; ++i) {
        cout << "Inserire " << i+1 << "-esimo elemento: ";
        cin >> source[i];
    }

    for (int i = 0; i < N; ++i) 
        dest[N-i-1] = source[i];

    cout << "Source: " << endl;
    for (int i = 0; i < N; ++i)
        cout << source[i] << " ";
    
    cout << "\nDest: " << endl;
    for (int i = 0; i < N; ++i)
        cout << dest[i] << " ";
    
    return 0;
}
