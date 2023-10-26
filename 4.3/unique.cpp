#include <iostream>

#define MAXN 10000

using namespace std;

int main() {
    int N;
    int arr[MAXN], aus[MAXN];
    
    cout << "Inserire numero di elementi da inserire: ";
    cin >> N;
    
    for (int i = 0; i < N; ++i) {
        cout << "Inserire " << i+1 << "-esimo elemento positivo: ";
        cin >> arr[i];

        while(arr[i] <= 0) {
            cout << "ERRORE: hai inserito un numero negativo.\nInserire un altro " << i+1 << "-esimo elemento positivo: ";
            cin >> arr[i];
        }
    }
    
    int finalSize = 1;
    for (int i = 1; i < N; ++i) {
        if (arr[i] != arr[i-1])
            aus[finalSize++] = arr[i];
    }

    for (int i = 1; i < N; ++i) {
        if (i < finalSize)
            arr[i] = aus[i];
        else
            arr[i] = 0;
    }

    cout << "\nRisultato finale:" << endl;
    for (int i = 0; i < finalSize; ++i)
        cout << arr[i] << " ";
    cout << endl; 

    return 0;
}
