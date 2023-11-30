#include <iostream>

using namespace std;

void diagonal(char* arr, int size) {
    for (int i = 0; i < size; ++i)
        cout << *(arr + i*(size + 1));
}

int main() {
    const int N = 4;
    char array[N][N] = {
        {'T', 'H', 'M', 'J'},
        {'A', 'U', 'Y', 'L'},
        {'F', 'N', 'G', 'Q'},
        {'R', 'I', 'V', 'A'}
    };

    diagonal(array[0], N);
    cout << endl;

    return 0;
}
