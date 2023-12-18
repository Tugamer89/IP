#include <iostream>

using namespace std;

typedef struct cell {
    int head;
    cell *next;
} *lista;

void insertInOrder(lista& l, int elem) {
    lista preCell = nullptr;
    lista cur = l;

    while (cur && elem > cur->head) {
        preCell = cur;
        cur = cur->next;
    }

    cell* newCell = new cell;
    newCell->head = elem;
    newCell->next = cur;

    if (preCell)
        preCell->next = newCell;
    else
        l = newCell;
}

void deleteElem(lista& l, int elem) {
    lista preCell = nullptr;
    lista cur = l;

    while (cur && cur->head < elem) {
        preCell = cur;
        cur = cur->next;
    }

    if (!cur || cur->head != elem)
        return;

    if (preCell)
        preCell->next = cur->next;
    else
        l = cur->next;

    delete cur;
}

bool areConsecutiveLists(lista l1, const lista& l2) {
    if (!l1 || !l2)
        throw (string)"almeno una delle due liste è vuota";
    
    while (l1->next)
        l1 = l1->next;
    
    return l1->head < l2->head;
}

bool areEqualLists(lista l1, lista l2) {
    while (l1 && l2) {
        if (l1->head != l2->head)
            return false;
        l1 = l1->next;
        l2 = l2->next;
    }
    
    return l1 == l2;
}

int main() {
    lista l1 = nullptr;
    insertInOrder(l1, 9);
    insertInOrder(l1, 0);
    insertInOrder(l1, 6);
    insertInOrder(l1, 4);
    insertInOrder(l1, 8);
    insertInOrder(l1, -5);
    insertInOrder(l1, 4);

    lista tmp = l1;
    while (tmp) {
        cout << tmp->head << " -> ";
        tmp = tmp->next;
    }
    cout << endl;

    deleteElem(l1, 4);
    deleteElem(l1, 9);
    deleteElem(l1, -5);
    deleteElem(l1, 6);
    deleteElem(l1, 14);
    deleteElem(l1, -82);

    cout << "l1: ";
    tmp = l1;
    while (tmp) {
        cout << tmp->head << " -> ";
        tmp = tmp->next;
    }
    cout << endl;

    lista l2 = nullptr;
    insertInOrder(l2, 15);
    insertInOrder(l2, 24);
    insertInOrder(l2, 20);

    cout << "l2: ";
    tmp = l2;
    while (tmp) {
        cout << tmp->head << " -> ";
        tmp = tmp->next;
    }
    cout << endl;

    lista l3 = nullptr;
    insertInOrder(l3, 0);
    insertInOrder(l3, 8);
    insertInOrder(l3, 4);
    insertInOrder(l3, 47);

    cout << "l3: ";
    tmp = l3;
    while (tmp) {
        cout << tmp->head << " -> ";
        tmp = tmp->next;
    }
    cout << endl;

    cout << boolalpha;
    cout << "l1 e l2 sono consecutive? " << areConsecutiveLists(l1, l2) << endl;
    cout << "l2 e l1 sono consecutive? " << areConsecutiveLists(l2, l1) << endl;
    cout << "l1 e l2 sono uguali? " << areEqualLists(l1, l2) << endl;
    cout << "l1 e l1 sono uguali? " << areEqualLists(l1, l1) << endl;
    cout << "l1 e l3 sono uguali? " << areEqualLists(l1, l3) << endl;

    return 0;
}
