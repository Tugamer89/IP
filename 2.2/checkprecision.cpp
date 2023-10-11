#include <iostream>

using namespace std;

int main() {
    float num;
    cout << "Inserire un numero reale: ";
    cin >> num;

    float beforeNum = num;

    num /= 4.9;
    num /= 3.53;
    num /= 6.9998;
    num *= 4.9;
    num *= 3.53;
    num *= 6.9998;

    if (num != beforeNum)
        cout << "moltiplicare NON e' l'inverso di dividere" << endl;

    return 0;
}
