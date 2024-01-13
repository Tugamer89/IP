#include <iostream>

using namespace std;

typedef int T;
typedef struct cell {
    T data;
    cell* next;
}* list;

void printList(list l) {
    while (l) {
        cout << l->data;
        l = l->next;
        if (l)
            cout << " -> ";
    }
    cout << endl;
}

void deleteList(list& l) {
    while (l) {
        list tmp = l;
        l = l->next;
        delete tmp;
    }
}

list reverseList(list l) {
    list l2 = nullptr;

    while (l) {
        l2 = new cell{l->data, l2};
        l = l->next;
    }

    return l2;
}

void reverseListInPlace(list& l) {
    list l2 = nullptr;
    list cur = l;

    while (cur) {
        l2 = new cell{cur->data, l2};
        
        list tmp = cur;
        cur = cur->next;
        delete tmp;
    }

    l = l2;
}

int main() {
    list l = nullptr;
    l = new cell{5, l};
    l = new cell{3, l};
    l = new cell{-9, l};
    l = new cell{0, l};
    l = new cell{14, l};
    l = new cell{89, l};
    l = new cell{5, l};

    list l2 = reverseList(l);

    printList(l);
    printList(l2);
    reverseListInPlace(l);
    printList(l);

    deleteList(l);
    deleteList(l2);

    return 0;
}
