#include "list_recursive.h"
#include <iostream>

using namespace std;

void insertElemInOrderedList(list& l, T s) {
    if (!l || l->data > s) {
        l = new cell{s, l};
        return;
    }

    list curr = l;
    while (curr->next && curr->next->data < s)
        curr = curr->next;

    if (!curr->next || curr->next->data != s && curr->data != s)
        curr->next = new cell{s, curr->next};
}

void printList(const list& l) {
    list cur = l;
    while (cur) {
        cout << cur->data << " ";
        cur = cur->next;
    }
    cout << endl;
}

void recursive_printList(const list& l) {
    if (!l) {
        cout << endl;
        return;
    }

    cout << l->data << " ";
    recursive_printList(l->next);
}

void recursive_reversePrintList(const list& l) {
    if (!l)
        return;

    recursive_reversePrintList(l->next);
    cout << l->data << " ";
}

void recursive_deleteAllElementsFromList(list& l) {
    if (!l)
        return;
    
    recursive_deleteAllElementsFromList(l->next);
    delete l;
    l = nullptr;
}

bool recursive_isElementInOrderedList(const list& l, T x) {
    if (!l || l->data > x)
        return false;
    return l->data == x || recursive_isElementInOrderedList(l->next, x);
}

unsigned recursive_ListLength(const list& l) {
    if (!l)
        return 0;
    return recursive_ListLength(l->next) + 1;
}

bool recursive_insertElemInOrderedList(list& l, T x) {
    if (!l || l->data > x) {
        l = new cell{x, l};
        return true;
    }

    if (l->data == x)
        return false;

    if (l->data > x || (l->next && l->next->data <= x))
        return recursive_insertElemInOrderedList(l->next, x);

    l->next = new cell{x, l->next};
    return true;
}

bool recursive_removeElemFromOrderedList(list& l, T x) {
    if (!l || l->data > x)
        return false;

    if (l->data == x) {
        list next = l->next;
        delete l;
        l = next;
        return true;
    }

    if (!l->next)
        return false;

    if (l->next->data == x) {
        list next = l->next->next;
        delete l->next;
        l->next = next;
        return true;
    }
        
    return recursive_removeElemFromOrderedList(l->next, x);
}
