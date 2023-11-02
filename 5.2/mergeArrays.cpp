#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    const int N1 = 9;
    const int N2 = 10;
    int s1[N1], s2[N2], D[N1 + N2];


    for (int i = 0; i < N1; ++i)
        s1[i] = rand() % 101;

    for (int i = 0; i < N2; ++i)
        s2[i] = rand() % 101;


    for (int i = 0; i < N1-1; ++i)
        for (int j = 0; j < N1-i-1; ++j)
            if (s1[j] > s1[j+1])
                swap(s1[j], s1[j+1]);

    for (int i = 0; i < N2-1; ++i)
        for (int j = 0; j < N2-i-1; ++j)
            if (s2[j] > s2[j+1])
                swap(s2[j], s2[j+1]);


    int i = 0;
    int j = 0;
    int k = 0;

    while (i < N1 && j < N2) {
        if (s1[i] < s2[j])
            D[k++] = s1[i++];
        else
            D[k++] = s2[j++];
    }

    while (i < N1)
        D[k++] = s1[i++];
    
    while (j < N2)
        D[k++] = s2[j++];


    cout << "L'array s1 contiene: ";
    for (int elem : s1)
        cout << elem << " ";
    cout << endl;

    cout << "L'array s2 contiene: ";
    for (int elem : s2)
        cout << elem << " ";
    cout << endl;

    cout << "L'array d contiene: ";
    for (int elem : D)
        cout << elem << " ";
    cout << endl;

    return 0;
}
