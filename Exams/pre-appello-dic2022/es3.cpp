#include <iostream>

using namespace std;

typedef struct cell {
    string head;
    cell* next;
} *list;

string concatLists(const list l) {
    if (!l)
        throw (string)"la lista è vuota";
    
    if (l->next)
        return l->head + concatLists(l->next);
    return l->head;
}

int listSize(const list l) {
    if (!l)
        return 0;
    return listSize(l->next) + 1;
}

bool atLeastOneEcco(const list l) {
    if (!l)
        throw (string)"la lista è vuota";

    do {
        if (l->head == "ecco")
            return true;
        l = l->next;
    } while(l);

    return false;
}

bool allEcco(const list l) {
    if (!l)
        throw (string)"la lista è vuota";

    do {
        if (l->head != "ecco")
            return false;
        l = l->next;
    } while(l);

    return true;
}

int main() {

    return 0;
}
