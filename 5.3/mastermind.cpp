#include <iostream>

using namespace std;

const string allChars = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

bool correctChars(const string& tri, int dim) {
    for (char elem : tri) {
        bool isPresent = false;

        for (int i = 0; i < dim; ++i) {
            if (elem == allChars[i]) {
                isPresent = true;
                break;
            }
        }

        if (!isPresent)
            return false;
    }

    return true;
}

int main() {
    srand(time(NULL));

    string table, userTry;
    unsigned int totalTries, elemDim, tableDim;

    cout << "Numero tentativi: ";
    cin >> totalTries;

    cout << "Numero di elementi: ";
    cin >> elemDim;

    cout << "Dimensione tabella: ";
    cin >> tableDim;

    for (int i = 0; i < tableDim; ++i)
        table += allChars[rand() % elemDim];

    cout << "Caratteri usabili: ";
    for (int i = 0; i < elemDim; ++i)
        cout << allChars[i];
    cout << endl;
 
    
    for (unsigned int currentTry = totalTries; currentTry > 0; --currentTry) {
        cout << "\nTentativi rimasti: " << currentTry << "\nInserisci tuo tentativo: ";
        cin >> userTry;

        while (userTry.size() != tableDim || !correctChars(userTry, elemDim)) {
            cout << "ERRORE: hai inserito troppi caratteri oppure hai inserito caratteri non consentiti.\nRiprova: ";
            cin >> userTry;
        }

        if (userTry == table)
            break;

        unsigned int correctPos = 0;
        unsigned int correctElem = 0;

        for (int i = 0; i < tableDim; ++i) {
            if (userTry[i] == table[i]) {
                ++correctPos;
                continue;
            }

            for (int j = 0; j < tableDim; ++j) {
                if (i != j && table[i] == userTry[j]) {
                    ++correctElem;
                    break;
                }
            }
        }

        cout << "Elementi corretti nella posizione giusta: " << correctPos << endl;
        cout << "Elementi corretti nella posizione errata: " << correctElem << endl;
    }


    if (userTry == table)
        cout << "Hai indovinato!" << endl;
    else
        cout << "Hai sbagliato, la soluzione era " << table << endl;
    

    return 0;
}
