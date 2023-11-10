#include <iostream>

using namespace std;

static inline bool isAnswerValid(char c) {
    return c == 'n' || c == 'y';
}

double onlineAverage() {
    int nums = 0;
    double sum = 0;
    char res = 0;

    do {
        double num;
        cout << "Inserire il " << ++nums << "-esimo numero: ";
        cin >> num;
        sum += num;

        do {
            if (!isAnswerValid(res) && res != 0)
                cout << "ERRORE: il carattere inserito non è valido!" << endl;

            cout << "Continuare l'inserimento? (y|n): ";
            cin >> res;
        } while(!isAnswerValid(res));

    } while(res != 'n');

    return sum / nums;
}

int main() {
    double average = onlineAverage();
    cout << "La media è " << average << endl;;

    return 0;
}
