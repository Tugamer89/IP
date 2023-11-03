#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#define N1 9
#define N2 10

using namespace std;

string array2String(const short array[], int size) {
    string ret = "{ ";
    for (int i = 0; i < size; ++i)
        ret += (i > 0 ? ", " : "") + to_string(array[i]);
    ret += " }";
    return ret;
}

int main() {
    srand(time(NULL));
    short s1[N1], s2[N2], D[N1 + N2];
    
    for (int i = 0; i < N1; ++i)
        s1[i] = rand() % 256;

    for (int i = 0; i < N2; ++i)
        s2[i] = rand() % 256;


    cout << "Array s1 (generato) = " << array2String(s1, N1) << endl;
    cout << "Array s2 (generato) = " << array2String(s2, N2) << endl;


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


    cout << "Array s1 (ordinato) = " << array2String(s1, N1) << endl;
    cout << "Array s2 (ordinato) = " << array2String(s2, N2) << endl;
    cout << "Array d = " << array2String(D, N1 + N2) << endl;

    return 0;
}
