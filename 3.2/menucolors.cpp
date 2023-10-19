#include <iostream>

using namespace std;

int main() {
    const string colors[] = {"Rosso", "Verde", "Blu", "Giallo", "Arancione", "Marrone", "Nero", "Turchese"};
    const int colorsSize = 8;
    
    while (true) {
        cout << "Scegli il tuo colore preferito (inserisci la lettera iniziale):" << endl;
        for (int i = 0; i < colorsSize; ++i)
            cout << colors[i][0] << ") " << colors[i] << endl;
        
        char choice;
        cin >> choice;
        choice = toupper(choice);

        bool validChoice = false;
        for (int i = 0; i < colorsSize; ++i) {
            if (choice == toupper(colors[i][0])) {
                //cout << "Il tuo colore preferito è " << colors[i] << endl;
                validChoice = true;
                break;
            }
        }

        if (validChoice)
            break;
        
        cout << "Scelta non valida. Per favore, inserisci la lettera iniziale di un colore presente nel menu.\n" << endl;
    }
    
    return 0;
}
