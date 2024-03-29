#include "set_dll.h"
#include <iostream>

using namespace std;

void insert_set_dll(set_dll& s, int v) {
    if (!s) {
        s = new set_cell{v};
        s->next = s->prev = s;
        return;
    }
    
    set_dll cur = s;

    if (s->data > v) {
        while (cur->next != s)
            cur = cur->next;

        s = new set_cell{v, s, s->prev};
        s->next->prev = s;
        cur->next = s;
        return;
    }

    while (cur->next != s && cur->next->data < v)
        cur = cur->next;

    if (cur->data == v)
        return;

    if (cur->next == s || cur->next->data != v) {
        cur->next = new set_cell{v, cur->next, cur};
        cur->next->next->prev = cur->next;
    }
}

void print_set_dll(const set_dll& s) {
    set_dll tmp = s;
    while (tmp) {
        cout << tmp->data;
        tmp = tmp->next;
        if (tmp == s)
            break;
        cout << " -> ";
    }

    cout << endl;
}

void revprint_set_dll(const set_dll& s) {
    if (!s)
        return;

    set_dll tmp = s->prev;
    while (true) {
        cout << tmp->data;
        tmp = tmp->prev;
        if (tmp == s->prev)
            break;
        cout << " -> ";
    }

    cout << endl;
}

set_dll union_set_dll(const set_dll& s1, const set_dll& s2) {
    set_dll s3 = nullptr;
    set_dll cur1 = s1;
    set_dll cur2 = s2;
    set_dll cur3 = s3;

    while (cur1 && cur2) {
        bool isTheFirst = cur1->data < cur2->data;
        const set_dll s = isTheFirst ? s1 : s2;
        set_dll* cur = isTheFirst ? &cur1 : &cur2;
        *cur = (*cur)->next;

        if (cur3 && (*cur)->prev->data <= cur3->data) {
            if (*cur == s)
                *cur = nullptr;
            continue;
        }

        if (!cur3) {
            cur3 = new set_cell{(*cur)->prev->data};
            cur3->next = cur3->prev = cur3;
            s3 = cur3;
        }
        else {
            cur3->next = new set_cell{(*cur)->prev->data, cur3->next, cur3};
            cur3->next->next->prev = cur3;
        }
        
        cur3 = cur3->next;
        if (*cur == s)
            *cur = nullptr;
    }

    set_dll cur = cur1 ? cur1 : cur2;
    while (cur) {
        cur = cur->next;

        if (cur3 && cur->prev->data == cur3->data) {
            if (cur == s1 || cur == s2)
                cur = nullptr;
            continue;
        }

        if (!cur3) {
            cur3 = new set_cell{cur->prev->data};
            s3 = cur3->next = cur3->prev = cur3;
        }
        else {
            cur3->next = new set_cell{cur->prev->data, s3, cur3};
            s3->prev = cur3;
        }

        cur3 = cur3->next;
        if (cur == s1 || cur == s2)
            cur = nullptr;
    }

    return s3;
}

set_dll intersect_set_dll(const set_dll& s1, const set_dll& s2) {
    set_dll s3 = nullptr;
    set_dll cur1 = s1;
    set_dll cur2 = s2;
    set_dll cur3 = s3;
    
    while (cur1 && cur2) {
        while (cur2->data < cur1->data) {
            cur2 = cur2->next;
            if (cur2 == s2)
                break;
        }

        cur1 = cur1->next;

        if (cur2->data != cur1->prev->data) {
            if (cur1 == s1)
                break;
            continue;
        }

        if (!cur3) {
            cur3 = new set_cell{cur2->data};
            s3 = cur3->next = cur3->prev = cur3;
        }
        else {
            cur3->next = new set_cell{cur2->data, s3, cur3};
            s3->prev = cur3;
        }

        cur3 = cur3->next;
        if (cur1 == s1)
            break;
    }

    return s3;
}
