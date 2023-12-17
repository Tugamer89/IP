#include <iostream>

using namespace std;

struct turista {
    string codiceFiscale;
    string cognome;
    string nome;
    string nazionalita;
};

struct insieme_di_turisti {
    turista* data;
    unsigned int size;
    unsigned int capacity;
};

bool StessoTurista(const turista& t1, const turista& t2) {
    if (t1.codiceFiscale != t2.codiceFiscale)
        return false;
    
    if (t1.cognome != t2.cognome)
        return false;
    
    if (t1.nome != t2.nome)
        return false;
    
    if (t1.nazionalita != t2.nazionalita)
        return false;

    return true;
}

void InserisciTurista(insieme_di_turisti& l, const turista& t);
void CancellaTurista(insieme_di_turisti& l, int index);
bool InsiemeVuoto(const insieme_di_turisti& l);
void StampaInsiemeTuristi(const insieme_di_turisti& l);

insieme_di_turisti UnioneTraInsiemi(const insieme_di_turisti& l1, const insieme_di_turisti& l2) {
    insieme_di_turisti l3;
    l3.size = 0;
    l3.capacity = l1.size + l2.size;
    l3.data = new turista[l3.capacity];

    int index = 0;
    for (int i = 0; i < l1.size + l2.size; ++i) {
        bool needToInsert = true;
        turista elem = i < l1.size ? l1.data[i] : l2.data[i - l1.size];

        for (int j = 0; j < l3.size; ++j) {
            if (StessoTurista(elem, l3.data[j])) {
                needToInsert = false;
                break;
            }
        }

        if (needToInsert) {
            l3.data[index++] = elem;
            ++l3.size;
        }
    }

    return l3;
}

int main() {
    turista t1 = {"AAA123123A", "Mario", "Rossi", "Italico"};
    turista t2 = {"BBB321321B", "Maria", "Rossa", "Tedesca"};
    turista t3 = {"AAA123123A", "Mario", "Rossi", "Italico"};

    cout << boolalpha;
    cout << "t1 = t2? " << StessoTurista(t1, t2) << endl;
    cout << "t1 = t3? " << StessoTurista(t1, t3) << endl;

    insieme_di_turisti l1, l2, l3;

    l1.size = 2;
    l1.capacity = l1.size;
    l1.data = new turista[l1.capacity];
    l1.data[0] = t1;
    l1.data[1] = t2;

    l2.size = 3;
    l2.capacity = l2.size;
    l2.data = new turista[l2.capacity];
    l2.data[0] = t2;
    l2.data[1] = t3;
    l2.data[2] = {"AAA12312gf3A", "Marion", "Rougue", "Francese"};

    l3 = UnioneTraInsiemi(l1, l2);

    for (int i = 0; i < l3.size; ++i)
        cout << l3.data[i].codiceFiscale << " ";
    cout << endl;

    return 0;
}
