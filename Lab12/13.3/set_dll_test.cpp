#include "set_dll.h"
#include <iostream>

using namespace std;

static void newTest() {
    cout << "***********" << endl; 
}

int main() {
    set_dll list = nullptr;

    // test of insert_set_dll
    newTest();
    insert_set_dll(list, 4);
    insert_set_dll(list, 4);
    insert_set_dll(list, 9);
    insert_set_dll(list, 5);
    insert_set_dll(list, 0);
    insert_set_dll(list, 9);
    insert_set_dll(list, -4);
    insert_set_dll(list, 14);
    insert_set_dll(list, -4);

    set_dll tmp = list;
    do {
        cout << tmp << ": " << tmp->data << "\tnext: " << tmp->next << "\tprev: " << tmp->prev << endl;
        tmp = tmp->next;
    } while (tmp != list);

    // test of print_set_dll
    newTest();
    print_set_dll(list);

    // test of revprint_set_dll
    newTest();
    revprint_set_dll(list);

    // test of union_set_dll
    newTest();
    set_dll l2 = nullptr;
    insert_set_dll(l2, 0);
    insert_set_dll(l2, -19);
    insert_set_dll(l2, 9);
    insert_set_dll(l2, 42);
    insert_set_dll(l2, 1);
    insert_set_dll(l2, 0);

    set_dll l = union_set_dll(list, l2);
    print_set_dll(list);
    print_set_dll(l2);
    print_set_dll(l);

    return 0;
}
