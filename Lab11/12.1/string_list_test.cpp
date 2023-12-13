#include "string_list.h"
#include <iostream>
#include <string>

using namespace std; 

int main() {
    system("clear");
    cout << boolalpha;

    list tmp = nullptr;
    list l = nullptr;

    // test of headInsert
    headInsert(l, "seconda");
    headInsert(l, "prima");
    tmp = l;
    while (true) {
        cout << tmp->data;
        tmp = tmp->next;
        if (!tmp)
            break;
        cout << " -> ";
    }
    cout << endl;
    cout << "***********" << endl;

    // test of tailInsert
    l = nullptr;
    tailInsert(l, "terza");
    tailInsert(l, "quarta");
    tmp = l;
    while (true) {
        cout << tmp->data;
        tmp = tmp->next;
        if (!tmp)
            break;
        cout << " -> ";
    }
    cout << endl;
    cout << "***********" << endl;

    // test of read
    l = nullptr;
    read(l);
    tmp = l;
    while (true) {
        cout << tmp->data;
        tmp = tmp->next;
        if (!tmp)
            break;
        cout << " -> ";
    }
    cout << endl;
    cout << "***********" << endl;

    // test of print
    print(l);
    cout << "***********" << endl;

    // test of size
    cout << "The size is " << size(l) << endl;
    cout << "***********" << endl;

    // test of isEmpty
    cout << "Is the old list empty? " << isEmpty(l) << endl;
    l = nullptr;
    cout << "Is the new list empty? " << isEmpty(l) << endl;
    cout << "***********" << endl;

    // test of getElem
    tailInsert(l, "prima");
    tailInsert(l, "seconda");
    tailInsert(l, "terza");
    tailInsert(l, "quarta");

    try {
        int indexes[] = {2, 3, 0, 9};
        for (int index : indexes) {
            string elem = getElem(l, index);
            cout << "The " << index << "th element is " << elem << endl;
        }
    } catch (const string& err) {
        cerr << "ERRORE: " << err << "!" << endl;
    }
    cout << "***********" << endl;

    // test of insertAt
    try {
        int indexes[] = {2, 4, 0, 7, 9};
        for (int index : indexes) {
            insertAt(l, to_string(index), index);
            print(l);
        }
    } catch (const string& err) {
        cerr << "ERRORE: " << err << "!" << endl;
    }
    cout << "***********" << endl;

    // test of deleteAt
    try {
        int indexes[] = {2, 4, 0, 7};
        for (int index : indexes) {
            deleteAt(l, index);
            print(l);
        }
    } catch (const string& err) {
        cerr << "ERRORE: " << err << "!" << endl;
    }
    cout << "***********" << endl;

    // test of deleteOnce
    string elems[] = {"terza", "vacca", "7", "prima"};
    for (string elem : elems) {
        deleteOnce(l, elem);
        print(l);
    }
    cout << "***********" << endl;

    // test of deleteAll
    headInsert(l, "quarta");
    headInsert(l, "quarta");
    tailInsert(l, "quarta");
    print(l);
    string elems2[] = {"vacca", "quarta"};
    for (string elem : elems2) {
        deleteAll(l, elem);
        print(l);
    }
    headInsert(l, "2");
    headInsert(l, "2");
    print(l);
    deleteAll(l, "2");
    headInsert(l, "questo dovrebbe essere l'unico elemento");
    print(l);
    cout << "***********" << endl;

    // test of deleteOnce_variant
    l = nullptr;
    headInsert(l, "b");
    headInsert(l, "a");
    tailInsert(l, "c");
    print(l);
    string elems3[] = {"b", "c", "a"};
    for (string elem : elems3) {
        cout << "Found and deleted " << elem << "? " << deleteOnce_variant(l, elem) << endl;
        print(l);
    }
    cout << "***********" << endl;

    // test of deleteAll_variant
    l = nullptr;
    headInsert(l, "c");
    headInsert(l, "b");
    headInsert(l, "b");
    headInsert(l, "a");
    tailInsert(l, "a");
    print(l);
    string elems4[] = {"b", "a", "c"};
    for (string elem : elems4) {
        cout << "Deleted " << elem << " " << deleteAll_variant(l, elem) << " times" << endl;
        print(l);
    }
    cout << "***********" << endl;

    return 0;
}
