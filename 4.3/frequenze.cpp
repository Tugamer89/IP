#include <iostream>

#define MAXN 10000

using namespace std;

int main() {
    int N;
    int arr[MAXN], counts[MAXN];
    
    cout << "Inserire numero di elementi da inserire: ";
    cin >> N;
    
    for (int i = 0; i < N; ++i) {
        cout << "Inserire " << i+1 << "-esimo elemento: ";
        cin >> arr[i];
        counts[i] = 0;
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (j < i && arr[i] == arr[j]) {
                counts[i] = -1;
                break;
            }
            
            if (arr[i] == arr[j])
                ++counts[i];
        }
    }

    cout << endl;
    for (int i = 0; i < N; ++i)
        if (counts[i] > 0)
            cout << "L'elemento " << arr[i] << " è presente " << counts[i] << " volte" << endl;

    return 0;
}
