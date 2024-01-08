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
    insert_set_dll(l2, 4);
    insert_set_dll(l2, 1);
    insert_set_dll(l2, 5);
    insert_set_dll(l2, 0);
    set_dll l3 = nullptr;
    insert_set_dll(l3, 12);

    cout << "A:\t";
    print_set_dll(list);
    cout << "B:\t";
    print_set_dll(l2);
    cout << "C:\t";
    print_set_dll(l3);
    cout << "A ∪ B:\t";
    print_set_dll(union_set_dll(list, l2));
    cout << "B ∪ A:\t";
    print_set_dll(union_set_dll(l2, list));
    cout << "A ∪ C:\t";
    print_set_dll(union_set_dll(list, l3));
    cout << "C ∪ A:\t";
    print_set_dll(union_set_dll(l3, list));
    cout << "A ∪ O:\t";
    print_set_dll(union_set_dll(list, nullptr));
    cout << "O ∪ A:\t";
    print_set_dll(union_set_dll(nullptr, list));
    cout << "O ∪ O:\t";
    print_set_dll(union_set_dll(nullptr, nullptr));

    // test of intersect_set_dll
    newTest();
    cout << "A:\t";
    print_set_dll(list);
    cout << "B:\t";
    print_set_dll(l2);
    cout << "C:\t";
    print_set_dll(l3);
    cout << "A ∩ B:\t";
    print_set_dll(intersect_set_dll(list, l2));
    cout << "B ∩ A:\t";
    print_set_dll(intersect_set_dll(l2, list));
    cout << "A ∩ C:\t";
    print_set_dll(intersect_set_dll(list, l3));
    cout << "C ∩ A:\t";
    print_set_dll(intersect_set_dll(l3, list));
    cout << "A ∩ O:\t";
    print_set_dll(intersect_set_dll(list, nullptr));
    cout << "O ∩ A:\t";
    print_set_dll(intersect_set_dll(nullptr, list));
    cout << "O ∩ O:\t";
    print_set_dll(intersect_set_dll(nullptr, nullptr));

    return 0;
}
