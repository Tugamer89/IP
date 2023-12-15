#include <iostream>
#include <string>
#include "string_ord_list.h"

using namespace std;

int main() {
    system("clear");
    cout << boolalpha;

    ordList l = nullptr;
    ordList l2 = nullptr;
    ordList tmp = nullptr;

    // test of insertElement
    insertElement(l, "abba");
    insertElement(l, "acca");
    insertElement(l, "aaaa");

    tmp = l;
    while (tmp) {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }    
    cout << endl;
    cout << "***********" << endl;

    // test of readList
#ifdef TEST_READ
    l = nullptr;
    readList(l);
#endif

    tmp = l;
    while (tmp) {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }    
    cout << endl;
    cout << "***********" << endl;

    // test of printList
    printList(l);
    cout << "***********" << endl;

    // test of listSize
    cout << "La dimensione della lista è " << listSize(l) << endl;
    cout << "***********" << endl;

    // test of isEmptyList
    cout << "La lista è vuota? " << isEmptyList(l) << endl;
    cout << "La lista è vuota? " << isEmptyList(l2) << endl;
    cout << "***********" << endl;

    // test of getElement
    insertElement(l, "ahha");
    insertElement(l, "azza");
    printList(l);
    int indexes[] = {0, 2, 9, 1};
    
    for (int index : indexes) {
        try {
            string elem = getElement(l, index);
            cout << "L'elemento di indice " << index << " è " << elem << endl;
        } catch (const string& err) {
            cerr << "ERRORE: " << err << endl;
        }
    }
    cout << "***********" << endl;

    // test of deleteElementAt
    printList(l);
    int indexes2[] = {0, 2, 9, 1};
    
    for (int index : indexes2) {
        try {
            deleteElementAt(l, index);
            printList(l);
        } catch (const string& err) {
            cerr << "ERRORE: " << err << endl;
        }
    }
    cout << "***********" << endl;

    // test of deleteElementOnce
    insertElement(l, "aaaa");
    insertElement(l, "affa");
    insertElement(l, "caaa");
    insertElement(l, "aaaa");
    insertElement(l, "aaaz");
    printList(l);
    string elems[] = {"aaaa", "azza", "kkkk", "aaaa", "caaa"};
    
    for (string elem : elems) {
        deleteElementOnce(l, elem);
        printList(l);
    }
    cout << "***********" << endl;

    // test of deleteAllElements
    insertElement(l, "aaaa");
    insertElement(l, "affa");
    insertElement(l, "caaa");
    insertElement(l, "aaaa");
    insertElement(l, "aaaz");
    insertElement(l, "azza");
    insertElement(l, "azza");
    printList(l);
    string elems2[] = {"aaaa", "azza", "kkkk", "aaaa", "caaa", "abba"};
    
    for (string elem : elems2) {
        deleteAllElements(l, elem);
        printList(l);
    }
    cout << "***********" << endl;

    // test of listAreEqual
    cout << "l e l2 sono uguali? " << listAreEqual(l, l2) << endl;
    l2 = l;
    cout << "l e l2 sono uguali? " << listAreEqual(l, l2) << endl;
    cout << "***********" << endl;

    // test of concatLists
    l2 = nullptr;
    insertElement(l2, "aaaa");
    insertElement(l2, "ahha");
    insertElement(l2, "akka");
    insertElement(l2, "assa");
    insertElement(l2, "alla");

    ordList l3 = concatLists(l, l2);
    printList(l);
    printList(l2);
    printList(l3);
    cout << "***********" << endl;

    // test of unionLists
    l3 = unionLists(l, l2);
    printList(l);
    printList(l2);
    printList(l3);
    cout << "***********" << endl;

    exit(0);
    // test of unionLists
    l3 = intersectLists(l, l2);
    printList(l);
    printList(l2);
    printList(l3);
    cout << "***********" << endl;

    return 0;
}
