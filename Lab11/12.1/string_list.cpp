#include "string_list.h"
#include <iostream>

using namespace std;

void headInsert(list& l, string s) {
    list tmp = new cell;
    tmp->data = s;
    tmp->next = l;
    l = tmp;
}

void tailInsert(list& l, std::string s) {
    if (!l) {
        l = new cell;
        l->data = s;
        l->next = nullptr;
        return;
    }

    list tmp = l;
    while (tmp->next)
        tmp = tmp->next;

    tmp->next = new cell;
    tmp->next->data = s;
    tmp->next->next = nullptr;
}

void read(list& l) {
    string elem;

    while (true) {
        cout << "Inserisci elemento: ";
        cin >> elem;
        if (elem == "STOP!")
            break;
        tailInsert(l, elem);
    }
}

void print(const list l) {
    list tmp = l;
    while (tmp) {
        cout << tmp->data;
        tmp = tmp->next;
        if (tmp)
            cout << " -> ";
    }
    cout << endl;
}

unsigned int size(const list l) {
    int sz = 0;
    list tmp = l;

    while (tmp) {
        tmp = tmp->next;
        ++sz;
    }

    return sz;
}

bool isEmpty(const list l) {
    return !l;
}

string getElem(const list l, unsigned int i) {
    list tmp = l;
    unsigned int j = 0;
    
    while (tmp) {
        if (j++ == i)
            return tmp->data;
        tmp = tmp->next;
    }

    throw (string)"getElem: invalid index";
}

void insertAt(list& l, string s, unsigned int i) {
    list cursor = l;

    if (i == 0) {
        l = new cell;
        l->data = s;
        l->next = cursor;
        return;
    }
    else if (!l)
        throw (string)"insertAt: invalid index";
    
    unsigned int j = 0;
    while (++j != i) {
        cursor = cursor->next;
        if (!cursor)
            throw (string)"insertAt: invalid index";
    }

    list tmp = new cell;
    tmp->data = s;
    tmp->next = cursor->next;
    cursor->next = tmp;
}

void deleteAt(list &l, unsigned int i) {
    if (!l)
        throw (string)"deleteAt: invalid index";

    list cursor = l;
    
    if (i == 0) {
        l = l->next;
        delete cursor;
        return;
    }

    unsigned int j = 0;
    while (++j != i) {
        cursor = cursor->next;
        if (!cursor)
            throw (string)"deleteAt: invalid index";
    }

    list tmp = cursor->next;
    cursor->next = tmp->next;
    delete tmp;
}

void deleteOnce(list& l, string s) {
    list cursor = l;
    
    if (l->data == s) {
        l = l->next;
        delete cursor;
        return;
    }

    while (cursor->next) {
        if (cursor->next->data == s) {
            list tmp = cursor->next;
            cursor->next = tmp->next;
            delete tmp;
            return;
        }
        cursor = cursor->next;
    }
}

void deleteAll(list& l, string s) {
    if (!l)
        return;

    list cursor = l;
    
    while (l->data == s) {
        l = l->next;
        delete cursor;

        if (!l)
            return;
        cursor = l;
    }

    while (cursor->next) {
        if (cursor->next->data == s) {
            list tmp = cursor->next;
            cursor->next = tmp->next;
            delete tmp;
            continue;
        }

        cursor = cursor->next;
    }
}

bool deleteOnce_variant(list& l, string s) {
    list cursor = l;
    
    if (l->data == s) {
        l = l->next;
        delete cursor;
        return true;
    }

    while (cursor->next) {
        if (cursor->next->data == s) {
            list tmp = cursor->next;
            cursor->next = tmp->next;
            delete tmp;
            return true;
        }
        cursor = cursor->next;
    }

    return false;
}

int deleteAll_variant(list& l, string s) {
    if (!l)
        return 0;

    int num = 0;
    list cursor = l;
    
    while (l->data == s) {
        l = l->next;
        delete cursor;
        ++num;

        if (!l)
            return num;
        cursor = l;
    }

    while (cursor->next) {
        if (cursor->next->data == s) {
            list tmp = cursor->next;
            cursor->next = tmp->next;
            delete tmp;
            ++num;
            continue;
        }

        cursor = cursor->next;
    }

    return num;
}
