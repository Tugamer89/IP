#include <iostream>

using namespace std;

int main() {
    const int N = 15;
    int item;
    cin >> item;

    int v[N];
    for (int i = 0; i < N; ++i) {
        cout << "Inserire " << i+1 << "-esimo elemento: ";
        cin >> v[i];
    }

    for (int i = 0; i < N-1; ++i)
        for (int j = 0; j < N-i-1; ++j)
            if (v[j] > v[j+1])
                swap(v[j], v[j+1]);

    int loc = -1;
    bool found = false;
    int low = 0;
    int high = N - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (v[mid] == item) {
            found = true;
            loc = mid;
            break;
        }
        else if (v[mid] < item)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (found)
        cout << item << " è stato trovato in posizione " << loc << endl;
    else
        cout << item << " non è stato trovato" << endl;

    return 0;
}
