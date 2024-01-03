#include "list_recursive.h"
#include <iostream>

using namespace std;

int main() {
    list l = nullptr;
    cout << boolalpha;
    
    // test of insertElemInOrderedList & printList
    cout << "***********" << endl;
    insertElemInOrderedList(l, 5);
    insertElemInOrderedList(l, 3);
    insertElemInOrderedList(l, 8);
    insertElemInOrderedList(l, 8);
    insertElemInOrderedList(l, 6);
    insertElemInOrderedList(l, 6);
    insertElemInOrderedList(l, -7);
    insertElemInOrderedList(l, -7);
    printList(l);

    // test of recursive_printList
    cout << "***********" << endl;
    recursive_printList(l);

    // test of recursive_reversePrintList
    cout << "***********" << endl;
    recursive_reversePrintList(l);
    cout << endl;

    // test of recursive_deleteAllElementsFromList
    cout << "***********" << endl;
    recursive_deleteAllElementsFromList(l);
    cout << "Deleted list: ";
    printList(l);

    // test of recursive_isElementInOrderedList
    cout << "***********" << endl;
    insertElemInOrderedList(l, 5);
    insertElemInOrderedList(l, 3);
    insertElemInOrderedList(l, 8);
    insertElemInOrderedList(l, 6);
    insertElemInOrderedList(l, -7);
    printList(l);

    T elems[] = {0, 5, 7, -7, 14, 8};
    for (T elem : elems)
        cout << elem << " è nella lista? " << recursive_isElementInOrderedList(l, elem) << endl;

    // test of recursive_ListLength
    cout << "***********" << endl;
    cout << "La lista è lunga " << recursive_ListLength(l) << endl;

    // test of recursive_insertElemInOrderedList
    cout << "***********" << endl;
    recursive_deleteAllElementsFromList(l);
    cout << recursive_insertElemInOrderedList(l, 5) << " ";
    cout << recursive_insertElemInOrderedList(l, 3) << " ";
    cout << recursive_insertElemInOrderedList(l, 8) << " ";
    cout << recursive_insertElemInOrderedList(l, 8) << " ";
    cout << recursive_insertElemInOrderedList(l, 6) << " ";
    cout << recursive_insertElemInOrderedList(l, 6) << " ";
    cout << recursive_insertElemInOrderedList(l, -7) << " ";
    cout << recursive_insertElemInOrderedList(l, -7) << endl;
    printList(l);

    // test of recursive_removeElemFromOrderedList
    cout << "***********" << endl;
    cout << recursive_removeElemFromOrderedList(l, 5) << " ";
    cout << recursive_removeElemFromOrderedList(l, 8) << " ";
    cout << recursive_removeElemFromOrderedList(l, 8) << " ";
    cout << recursive_removeElemFromOrderedList(l, 5) << " ";
    cout << recursive_removeElemFromOrderedList(l, -7) << " ";
    cout << recursive_removeElemFromOrderedList(l, 2) << " ";
    cout << recursive_removeElemFromOrderedList(l, -7) << endl;
    printList(l);

    return 0;
}
