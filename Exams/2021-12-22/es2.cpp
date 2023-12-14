#include <iostream>

using namespace std;

typedef int Elem;

typedef struct cell {
    Elem head;
    cell *next;
} *lista;

void deleteAll(lista& l, const Elem& elem) {
    if (l == nullptr)
        return;

    lista cursor = l;
    while (l->head == elem) {
        l = l->next;
        delete cursor;

        if (l == nullptr)
            return;
        cursor = l;
    }

    while (cursor->next) {
        if (cursor->next->head == elem) {
            lista tmp = cursor->next;
            cursor->next = tmp->next;
            delete tmp;
            continue;
        }

        cursor = cursor->next;
    }
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

    deleteAll(l, 4);

    tmp = l;
    while (tmp != nullptr) {
        cout << tmp->head << "->";
        tmp = tmp->next;
    }
    cout << endl;

    return 0;
}
