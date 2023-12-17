#include <iostream>

using namespace std;

struct Indirizzo {
    string via;
    int numCivico;
    string CAP;
    string citta;
};

struct Cliente {
    string codFiscale;
    string cognome;
    string nome;
    Indirizzo indirizzo;
};

bool sameZone(const Cliente& c1, const Cliente& c2) {
    return c1.indirizzo.CAP == c2.indirizzo.CAP;
}

int main() {
    Cliente c1 = {"AAA123AAA", "Rossi", "Mario", {"via Roma", 18, "000123", "Roma"}};
    Cliente c2 = {"BBB321BBB", "Rossello", "Mariuccio", {"via Napoli", 43, "01230", "Catanzaro"}};
    Cliente c3 = {"CCC000CCC", "Samuel", "Nik", {"via Milazzo", 2, "000123", "Roma"}};

    cout << boolalpha;
    cout << c1.nome << " " << c1.cognome << " e " << c2.nome << " " << c2.cognome << " abitano nella stessa zona? " << sameZone(c1, c2) << endl;
    cout << c1.nome << " " << c1.cognome << " e " << c3.nome << " " << c3.cognome << " abitano nella stessa zona? " << sameZone(c1, c3) << endl;
    cout << c3.nome << " " << c3.cognome << " e " << c2.nome << " " << c2.cognome << " abitano nella stessa zona? " << sameZone(c3, c2) << endl;

    return 0;
}
