#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Inserire numero intero: ";
    cin >> num;

    unsigned int absNum = (num > 0) ? num : -num;
    cout << "Numero assoluto: " << absNum << endl;
    return 0;
}