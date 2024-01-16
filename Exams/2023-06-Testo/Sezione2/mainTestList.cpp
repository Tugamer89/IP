#include "list.h"
#include <iostream>

using namespace std;

static inline void printDivisor() {
    cout << "***********" << endl;
}

static void printList(List l) {
    while (l) {
        cout << l << ": " << l->city << "\t prev: " << l->prev << "\t next: " << l->next << endl;
        l = l->next;
    }
}

int main() {
    List l = nullptr;

    // test of inserimentoInTesta
    printDivisor();
    inserimentoInTesta(l, "Roma");
    inserimentoInTesta(l, "Milano");
    inserimentoInTesta(l, "Venezia");
    inserimentoInTesta(l, "Pisa");
    inserimentoInTesta(l, "Aosta");

    printList(l);

    // test of stampaAndata
    printDivisor();
    cout << stampaAndata(l) << endl;
    cout << stampaAndata(nullptr) << endl;

    // test of stampaRitorno
    printDivisor();
    cout << stampaRitorno(l) << endl;
    cout << stampaRitorno(nullptr) << endl;

    // test of stampaAdiacenti
    printDivisor();
    cout << stampaAdiacenti(l, "Pisa") << endl;
    cout << stampaAdiacenti(l, "Aosta") << endl;
    cout << stampaAdiacenti(l, "Roma") << endl;
    cout << stampaAdiacenti(l, "Napoli") << endl;

    return 0;
}
