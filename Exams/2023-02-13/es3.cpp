#include <iostream>

using namespace std;

typedef struct Elem {
    int head;
    Elem* next;
} *Insieme;

void insertNewElem(Insieme& l, int elem) {
    if (!l) {
        l = new Elem;
        l->head = elem;
        l->next = nullptr;
        return;
    }

    Insieme preCur = nullptr;
    Insieme cur = l;
    while (cur) {
        if (cur->head == elem)
            return;
        preCur = cur;
        cur = cur->next;
    }

    preCur->next = new Elem;
    preCur->next->head = elem;
    preCur->next->next = nullptr;
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
