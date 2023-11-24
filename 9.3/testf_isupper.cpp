#include <iostream>

using namespace std;

bool isUpper(char* arr, int size) {
    for (int i = 0; i < size*size; ++i)
        if (*(arr+i) < 'A' || *(arr+i) > 'Z')
            return false;

    return true;
}

int main() {
    const int N = 3;
    char array[N][N] = {
        {'G', 'H', 'M'},
        {'A', 'S', 'Y'},
        {'G', 'n', 'Z'}
    };

    cout << boolalpha << isUpper(array[0], N) << endl;

    return 0;
}
