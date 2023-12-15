#include <iostream>
#include <string>
#include "string_ord_list.h"

using namespace std;

void insertElement(ordList& l, string s) {
    ordList preCell = nullptr;
    ordList currCell = l;

    while (currCell && currCell->data < s) {
        preCell = currCell;
        currCell = currCell->next;
    }

    cell* newCell = new cell;
    if (preCell)
        preCell->next = newCell;
    else
        l = newCell;
    newCell->data = s;
    newCell->next = currCell;
}

void readList(ordList& l) {
    ordList tmp = l;
    string input;

    while (true) {
        cout << "Inserisci un elemento: ";
        cin >> input;

        if (input == "STOP!")
            break;
        insertElement(l, input);
    }
}

void printList(const ordList& l) {
    ordList tmp = l;
    while (tmp) {
        cout << tmp->data;
        tmp = tmp->next;
        if (tmp)
            cout << " -> ";
    }
    cout << endl;
}

unsigned int listSize(const ordList& l) {
    unsigned int size = 0;
    ordList tmp = l;

    while (tmp) {
        ++size;
        tmp = tmp->next;
    }

    return size;
}

bool isEmptyList(const ordList& l) {
    return !l;
}

string getElement(const ordList& l, unsigned int i) {
    ordList tmp = l;
    unsigned int j = 0;
    
    while (j <= i && tmp) {
        if (j++ == i)
            return tmp->data;
        tmp = tmp->next;
    }

    throw (string)"getElgetElementem: invalid index " + to_string(i);
}

void deleteElementAt(ordList &l, unsigned int i) {
    if (!l)
        throw (string)"deleteElementAt: invalid index " + to_string(i);

    ordList cursor = l;
    
    if (i == 0) {
        l = l->next;
        delete cursor;
        return;
    }

    unsigned int j = 0;
    while (++j != i) {
        cursor = cursor->next;
        if (!cursor)
            throw (string)"deleteElementAt: invalid index " + to_string(i);
    }

    ordList tmp = cursor->next;
    cursor->next = tmp->next;
    delete tmp;
}

void deleteElementOnce(ordList& l, string s) {
    ordList cursor = l;
    
    if (l->data == s) {
        l = l->next;
        delete cursor;
        return;
    }

    while (cursor->next) {
        if (cursor->next->data == s) {
            ordList tmp = cursor->next;
            cursor->next = tmp->next;
            delete tmp;
            return;
        }
        cursor = cursor->next;
    }
}

void deleteAllElements(ordList& l, string s) {
    ordList preCell = nullptr;
    ordList currCell = l;

    while (currCell && currCell->data <= s) {
        if (currCell->data != s)
            preCell = currCell;
        currCell = currCell->next;
    }

    if (preCell)
        preCell->next = currCell;
    else
        l = currCell;
}

bool listAreEqual(const ordList& l1, const ordList& l2) {
    ordList cur1 = l1;
    ordList cur2 = l2;

    while (cur2 && cur1) {
        if (cur1->data != cur2->data)
            return false;

        cur1 = cur1->next;
        cur2 = cur2->next;
    }

    return cur1 == cur2;
}

ordList concatLists(const ordList& l1, const ordList& l2) {
    ordList list = nullptr;
    cell* preCell = nullptr;

    ordList cur1 = l1;
    ordList cur2 = l2;

    while (cur1 && cur2) {
        cell* newCell = new cell;
        newCell->next = nullptr;

        if (cur1->data <= cur2->data) {
            newCell->data = cur1->data;
            cur1 = cur1->next;
        }
        else {
            newCell->data = cur2->data;
            cur2 = cur2->next;
        }

        if (preCell)
            preCell->next = newCell;
        preCell = newCell; 

        if (!list)
            list = preCell;
    }

    ordList cur = cur1 ? cur1 : cur2;
    while (cur) {
        cell* newCell = new cell;
        newCell->next = nullptr;
        newCell->data = cur->data;
        cur = cur->next;
        
        if (preCell)
            preCell->next = newCell;
        preCell = newCell; 

        if (!list)
            list = preCell;
    }

    return list;
}

ordList unionLists(const ordList& l1, const ordList& l2) {
    ordList list = nullptr;
    cell* preCell = nullptr;

    ordList cur1 = l1;
    ordList cur2 = l2;

    while (cur1) {
        if (preCell && preCell->data == cur1->data) {
            cur1 = cur1->next;
            continue;
        }

        while (cur2 && cur1->data < cur2->data)
            cur2 = cur2->next;

        if (!cur2)
            break;

        if (cur2->data != cur1->data) {
            cur1 = cur1->next;
            continue;
        }

        cell* newCell = new cell;
        newCell->data = cur1->data;
        newCell->next = nullptr;
        cur1 = cur1->next;

        if (preCell)
            preCell->next = newCell;
        preCell = newCell; 

        if (!list)
            list = preCell;
    }

    return list;
}

ordList intersectLists(const ordList &l1, const ordList &l2) {
    
}
