#include <iostream>

#define N 5

using namespace std;

int main() {
    int arr[N];

    for (int i = 0; i < N; ++i)
        cin >> arr[i];

    int maxVal = arr[0];
    int maxCount = 1;
    
    for (int i = 1; i < N; ++i) {
        if (arr[i] > maxVal) {
            maxCount = 1;
            maxVal = arr[i];
        }
        else if (arr[i] == maxVal)
            ++maxCount;
    }

    cout << "maxVal = " << maxVal << endl;
    cout << "maxCount = " << maxCount << endl;

    return 0;
}
