#include <iostream>

using namespace std;

typedef struct Elem {
    int head;
    Elem* next;
} *Insieme;

void insertNewElem(Insieme& l, int elem) {
    Insieme cur = l;
    while (cur) {
        if (cur->head == elem)
            return;
        cur = cur->next;
    }

    cur = l;
    l = new Elem;
    l->head = elem;
    l->next = cur;
}

void printInsieme(const Insieme& ins) {
    if (!ins) {
        cout << endl;
        return;
    }

    cout << ins->head << " ";
    printInsieme(ins->next);
}

int main() {
    Insieme l = nullptr;

    insertNewElem(l, 12);
    insertNewElem(l, 4);
    insertNewElem(l, 24);
    insertNewElem(l, 4);
    insertNewElem(l, 14);
    insertNewElem(l, 18);
    insertNewElem(l, 18);
    insertNewElem(l, 0);
    insertNewElem(l, 12);
    insertNewElem(l, -9);
    
    printInsieme(l);

    return 0;
}
