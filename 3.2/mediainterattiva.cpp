#include <iostream>

using namespace std;

int main() {
    float mean = 0;
    int count = 0;
    char again;

    do {
        int num;
        cout << "Inserire un numero intero: ";
        cin >> num;

        mean += num;
        ++count;

        cout << "Continuare l'inserimento ('n' per terminare): ";
        cin >> again;
    } while (again != 'n');

    mean /= count;

    cout << "La media è " << mean << endl;

    return 0;
}
