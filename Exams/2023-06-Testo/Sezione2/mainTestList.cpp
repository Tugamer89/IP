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
    List l2 = nullptr;
    List l3 = nullptr;

    // test of inserimentoInTesta
    printDivisor();
    inserimentoInTesta(l, "Roma");
    inserimentoInTesta(l, "Milano");
    inserimentoInTesta(l, "Venezia");
    inserimentoInTesta(l, "Pisa");
    inserimentoInTesta(l, "Aosta");
    inserimentoInTesta(l2, "Napoli");
    inserimentoInTesta(l3, "Vicenza");
    inserimentoInTesta(l3, "Catanzaro");

    printList(l);
    cout << endl;
    printList(l2);
    cout << endl;
    printList(l3);

    // test of stampaAndata
    printDivisor();
    cout << stampaAndata(nullptr) << endl;
    cout << stampaAndata(l3) << endl;
    cout << stampaAndata(l2) << endl;
    cout << stampaAndata(l) << endl;

    // test of stampaRitorno
    printDivisor();
    cout << stampaRitorno(nullptr) << endl;
    cout << stampaRitorno(l3) << endl;
    cout << stampaRitorno(l2) << endl;
    cout << stampaRitorno(l) << endl;

    // test of stampaAdiacenti
    printDivisor();
    cout << stampaAdiacenti(l, "Pisa") << endl;
    cout << stampaAdiacenti(l, "Aosta") << endl;
    cout << stampaAdiacenti(l, "Roma") << endl;
    cout << stampaAdiacenti(l, "Napoli") << endl;
    cout << stampaAdiacenti(l2, "Napoli") << endl;
    cout << stampaAdiacenti(l3, "Vicenza") << endl;
    cout << stampaAdiacenti(l3, "Catanzaro") << endl;

    return 0;
}
