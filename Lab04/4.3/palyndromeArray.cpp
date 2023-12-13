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

    bool isPalyndrome = true;

    for (int i = 0; i < N/2; ++i) {
        if (arr[i] != arr[N-i-1]) {
            isPalyndrome = false;
            break;
        }
    }

    cout << "L'array inserito ";
    if (!isPalyndrome)
        cout << "non ";
    cout << "è palindromo" << endl;

    return 0;
}
