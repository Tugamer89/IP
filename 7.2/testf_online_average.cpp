#include <iostream>

using namespace std;

double onlineAverage() {
    int nums = 0;
    double sum = 0;
    char res;

    do {
        double num;
        cout << "Inserire il " << ++nums << "-esimo numero: ";
        cin >> num;
        sum += num;

        cout << "Inserire 'n' per terminare l'inserimento: ";
        cin >> res;
    } while(res != 'n');

    return nums / sum;
}

int main() {
    double average = onlineAverage();
    cout << "La media è " << average << endl;;

    return 0;
}
