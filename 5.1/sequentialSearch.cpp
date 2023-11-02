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

    int loc = -1;
    bool found = false;

    for (int i = 0; i < N || found; ++i) {
        if (v[i] == item) {
            found = true;
            loc = i;
        }
    }

    if (found)
        cout << item << " è stato trovato in posizione " << loc << endl;
    else
        cout << item << " non è stato trovato" << endl;

    return 0;
}
