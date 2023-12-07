#include <iostream>
#include "phoneBook.h"

int main() {
    phoneBook book;

    // test of push_contact_in_phoneBook
    ///*
    push_contact_in_phoneBook(book, "Rossi", "Mario", "3330000000");
    push_contact_in_phoneBook(book, "Rossello", "Mariuccio", "3390000001");
    for (contact cont : book)
        cout << cont.name << " " << cont.surname << " " << cont.phoneNumber << endl;
    cout << "***********" << endl;
    //*/

    // test of print_phoneBook
    ///*
    book.clear();
    push_contact_in_phoneBook(book, "Einstein", "Albert", "012334454");
    push_contact_in_phoneBook(book, "Tesla", "Nikola", "088388831");
    push_contact_in_phoneBook(book, "Gauss", "Carl-Friedrich", "03966776111");
    push_contact_in_phoneBook(book, "Fibonacci", "Leonardo", "11235813");
    print_phoneBook(book);
    cout << "***********" << endl;
    //*/

    // test of read_phoneBook_from_file
    ///*
    book.clear();
    read_phoneBook_from_file(book, "phoneBook.txt");
    print_phoneBook(book);
    cout << "***********" << endl;
    //*/

    // test of write_phoneBook_to_file
    ///*
    book.clear();
    read_phoneBook_from_file(book, "phoneBook.txt");
    write_phoneBook_to_file(book, "outPhoneBook.txt");
    book.clear();
    read_phoneBook_from_file(book, "outPhoneBook.txt");
    print_phoneBook(book);
    cout << "***********" << endl;
    //*/

    // test of sort_phoneBook_by_surnames
    ///*
    book.clear();
    read_phoneBook_from_file(book, "phoneBook.txt");
    sort_phoneBook_by_surnames(book);
    print_phoneBook(book);
    cout << "***********" << endl;
    //*/

    // test of find_phoneBook_contact_by_surname
    ///*
    book.clear();
    unsigned long int pos;
    read_phoneBook_from_file(book, "phoneBook.txt");
    sort_phoneBook_by_surnames(book);
    print_phoneBook(book);
    cout << "***********" << endl;

    if (find_phoneBook_contact_by_surname(book, "Gauss", pos))
        cout << "Gauss è stato trovato in posizione " << pos << endl;
    else
        cout << "Gauss non è stato trovato" << endl;

    if (find_phoneBook_contact_by_surname(book, "Armstrong", pos))
        cout << "Armstrong è stato trovato in posizione " << pos << endl;
    else
        cout << "Armstrong non è stato trovato" << endl;
    cout << "***********" << endl;
    //*/

    // test of shift_phoneBook
    ///*
    book.clear();
    try {
        read_phoneBook_from_file(book, "phoneBook.txt");
        print_phoneBook(book);
        cout << "***********" << endl;

        shift_phoneBook(book, 2);
        print_phoneBook(book);
        cout << "***********" << endl;

        shift_phoneBook(book, 982);
        print_phoneBook(book);
        cout << "***********" << endl;
    } catch (const string& err) {
        cerr << "ERRORE: " << err << endl;
    }
    //*/

    // test of add_contact_to_phoneBook
    ///*
    book.clear();
    read_phoneBook_from_file(book, "phoneBook.txt");
    print_phoneBook(book);
    cout << "***********" << endl;
    add_contact_to_phoneBook(book, "Ray", "Charles", "721051163211610410132821119710032749799107");
    print_phoneBook(book);
    cout << "***********" << endl;
    //*/

    return 0;
}
