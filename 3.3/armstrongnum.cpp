#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num;
    cout << "Inserire un numero intero maggiore o uguale a zero: ";
    cin >> num;

    while (num < 0) {
        cout << "ERRORE: hai inserito un numero negativo!\nInserisci un numero intero maggiore o uguale a zero: ";
        cin >> num;
    }

    int buff = num;
    int armNum = 0;
    int digits = static_cast<int>(log10(num)) + 1;

    for (int i = 0; i < digits; ++i) {
        armNum += pow(buff % 10, digits);
        buff /= 10;
    }

    cout << "Il numero " << num;
    if (num != armNum)
        cout << " non";
    cout << " è un numero di Armstrong" << endl;

    return 0;
}
