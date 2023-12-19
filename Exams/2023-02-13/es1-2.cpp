#include <iostream>
#include <vector>

#define TAB_SIZE 5

using namespace std;

enum Stato {
    LIBERO,
    MURO,
    OCCUPATO
};

struct Posizione {
    int riga;
    int colonna;
};

struct Casella {
    Posizione posizione;
    Stato stato;
};

bool adiacente(Casella c1, Casella c2)  {
    return (abs(c1.posizione.riga - c2.posizione.riga) == 1 && c1.posizione.colonna == c2.posizione.colonna) || 
           (abs(c1.posizione.colonna - c2.posizione.colonna) == 1 && c1.posizione.riga == c2.posizione.riga);
}

bool interna(const Casella& cas) {
    return cas.posizione.riga < TAB_SIZE && cas.posizione.colonna < TAB_SIZE;
}

void inserisciCasella(vector<Casella>& vec, const Casella& cas) {
    if (!interna(cas))
        throw (string)"la casella non è entro i limiti del tabellone";
    if (adiacente(cas, vec.back()))
        vec.push_back(cas);
}

int maxAmpiezza(const vector<Casella>& vec) {
    if (vec.empty())
        return 0;
    int left = TAB_SIZE;
    int right = 0;
    for (Casella cas : vec) {
        left = min(cas.posizione.colonna, left);
        right = max(cas.posizione.colonna, right);
    }
    return right - left + 1;
}

int main() {
    // some tests

    return 0;
}
