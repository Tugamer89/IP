#include <iostream>

using namespace std;

char last_letter() {
    cout << "Inserisci una lettera minuscola ";
    char last;

    do {
        cin >> last;
    } while(last < 'a' || last > 'z');

    char c = 'a';

    do {
        if (c > last)
            last = c;
        
        cout << "Inserisci una lettera minuscola (o altro carattere per terminare) ";
        cin >> c;
    } while(c >= 'a' && c <= 'z');

    return last;
}


int main() {
    char last;
    last = last_letter();
    cout << "La lettera più grande inserita è " << last << endl;

    return 0;
}
