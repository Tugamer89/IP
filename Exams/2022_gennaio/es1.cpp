#include <iostream>

using namespace std;

struct indirizzo {
    string via;
    string numCivico;
    string cap;
    string citta;
};

struct cliente {
    string codFiscale;
    string cognome;
    string nome;
    indirizzo indiriz;
};

bool sameZone(const cliente& c1, const cliente& c2) {
    return c1.indiriz.cap == c2.indiriz.cap;
}

int main() {
    cliente c1 = {"AAA123AAA", "Rossi", "Mario", {"via Roma", "18", "000123", "Roma"}};
    cliente c2 = {"BBB321BBB", "Rossello", "Mariuccio", {"via Napoli", "43", "01230", "Catanzaro"}};
    cliente c3 = {"CCC000CCC", "Samuel", "Nik", {"via Milazzo", "2", "000123", "Roma"}};

    cout << boolalpha;
    cout << c1.nome << " " << c1.cognome << " e " << c2.nome << " " << c2.cognome << " abitano nella stessa zona? " << sameZone(c1, c2) << endl;
    cout << c1.nome << " " << c1.cognome << " e " << c3.nome << " " << c3.cognome << " abitano nella stessa zona? " << sameZone(c1, c3) << endl;
    cout << c3.nome << " " << c3.cognome << " e " << c2.nome << " " << c2.cognome << " abitano nella stessa zona? " << sameZone(c3, c2) << endl;

    return 0;
}
