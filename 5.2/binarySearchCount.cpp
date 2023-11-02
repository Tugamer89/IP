#include <iostream>

using namespace std;

int searcherCounter(const int v[], const int N, const int item) {
    int count = 0;
    int low = 0;
    int high = N - 1;

    while (low <= high) {
        ++count;

        int mid = low + (high - low) / 2;
        if (v[mid] == item)
            break;
        else if (v[mid] < item)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return count;
}

int main() {
    const int N = 30;
    int v[N] = {2, 5, 7, 10, 13, 16, 18, 21, 25, 27, 30, 33, 36, 39, 42, 45, 48, 51, 54, 57, 60, 63, 66, 69, 72, 75, 78, 81, 84, 87};

    cout << "L'elemento " << v[0] << " (il primo) è stato trovato dopo " << searcherCounter(v, N, v[0]) << " passaggi" << endl;
    cout << "L'elemento " << v[N/2 - 1] << " (quello centrale) è stato trovato dopo " << searcherCounter(v, N, v[N/2 - 1]) << " passaggi" << endl;
    cout << "L'elemento " << v[N-1] << " (l'ultimo) è stato trovato dopo " << searcherCounter(v, N, v[N-1]) << " passaggi" << endl;

    return 0;
}
