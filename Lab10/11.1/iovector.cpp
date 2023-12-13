#include <iostream>
#include <vector>
#include "iovector.h"

using namespace std;

void readVector(vector<int>& v) {
    cout << "Inserisci la dimensione della sequenza: ";
    int N;
    cin >> N;

    while (N <= 0) {
        cout << "La dimensione deve essere positiva - riprova: ";
        cin >> N;
    }

    for (int i = 0; i < N; ++i) {
        int tmp;
        cout << "Inserisci " << i+1 << "-esimo elemento: ";
        cin >> tmp;
        v.push_back(tmp);
    }
}

void printVector(const vector<int>& v) {
    cout << "{";
    for (int i = 0; i < v.size(); ++i)
        cout << (i == 0 ? " " : ", ") << v[i];
    cout << " }" << endl;
}

void readVectorAlt(vector<int>& v) {
    char c;

    int i = 0;
    while (true) {
        cout << "Inserisci " << ++i << "-esimo elemento (y/Y per terminare): ";
        cin >> c;

        if (c == 'y' || c == 'Y')
            break;
        v.push_back(c - '0');
    }
}
