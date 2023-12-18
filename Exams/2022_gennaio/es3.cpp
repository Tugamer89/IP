#include <iostream>

using namespace std;

typedef struct cell {
    int head;
    cell *next;
} *lista;

int countElems(const lista& list) {
    if (!list)
        return 0;
    return 1 + countElems(list->next);
}

bool areAllElemsEven(lista list) {
    if (list == nullptr)
        throw (string)"La lista è vuota";

    while (list != nullptr) {
        if (list->head % 2 != 0)
            return false;

        list = list->next;
    }

    return true;
}

int main() {
    lista l = new cell;
    cell* c1 = new cell;
    cell* c2 = new cell;
    
    l->head = -8;
    l->next = c1;
    c1->head = 4;
    c1->next = c2;
    c2->head = 4;
    c2->next = nullptr;

    lista tmp = l;
    while (tmp != nullptr) {
        cout << tmp->head << "->";
        tmp = tmp->next;
    }
    cout << endl;

    cout << boolalpha;
    cout << "Ci sono " << countElems(l) << " elementi" << endl;
    cout << "Tutti gli elementi sono pari? " << areAllElemsEven(l) << endl;

    return 0;
}
