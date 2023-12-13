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
    
    int best1Index = -1;
    int best2Index = -1;
    for (int i = 0; i < N; ++i) {
        if (best1Index == -1 || counts[i] > counts[best1Index]) {
            if (counts[i] > best2Index && arr[i] != arr[best1Index])
                best2Index = best1Index;
            best1Index = i;
        }
        else if (best2Index == -1 || counts[i] > counts[best2Index])
            best2Index = i;
    }

    cout << "Il secondo elemento più frequente è " << arr[best2Index] << " presente " << counts[best2Index] << " volte" << endl;
    
    return 0;
}
