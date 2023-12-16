#include <iostream>
#include <fstream>
#include "phoneBook.h"

void push_contact_in_phoneBook(phoneBook& B, string surname, string name, string number) {
    B.push_back(contact{surname, name, number});
}

void print_phoneBook(const phoneBook& B) {
    cout << "***********" << endl;
    for (contact user : B)
        cout << user.surname << " " << user.name << " " << user.phoneNumber << endl;
    cout << "***********" << endl;
}

void read_phoneBook_from_file(phoneBook& B, string fileName) {
    ifstream infile(fileName);

    int n;
    infile >> n;

    for (int i = 0; i < n; ++i) {
        string surname, name, phone;
        infile >> surname >> name >> phone;
        push_contact_in_phoneBook(B, surname, name, phone);
    }

    infile.close();
}

void write_phoneBook_to_file(const phoneBook& B, string fileName) {
    ofstream outfile(fileName);

    outfile << B.size() << "\n";
    for (contact user : B)
        outfile << user.surname << " " << user.name << " " << user.phoneNumber << "\n";

    outfile.close();
}

void sort_phoneBook_by_surnames(phoneBook& B) {
    for (unsigned long int i = 0; i < B.size()-1; ++i)
        for (unsigned long int j = 0; j < B.size()-i-1; ++j)
            if (B.at(j).surname > B.at(j+1).surname)
                swap(B.at(j), B.at(j+1));
}

bool find_phoneBook_contact_by_surname(const phoneBook& B, string s, unsigned long int &pos) {
    pos = B.size();
    long long int low = 0;
    long long int high = B.size() - 1;

    while (low <= high) {
        pos = (high + low) / 2;

        if (B.at(pos).surname == s)
            return true;
        else if (B.at(pos).surname < s)
            low = pos + 1;
        else
            high = pos - 1;
    }

    if (B.back().surname < s)
        pos = B.size();

    return false;
}

void shift_phoneBook(phoneBook& B, unsigned long int pos) {
    if (pos > B.size())
        throw (string)"void shift_phoneBook: posizione fuori dai limiti ammissibili";

    B.push_back(B.back());
    for (unsigned long int i = B.size()-2; i > pos; --i)
        B.at(i) = B.at(i-1);
}

void add_contact_to_phoneBook(phoneBook& B, string surname, string name, string number) {
    sort_phoneBook_by_surnames(B);

    unsigned long int pos;
    find_phoneBook_contact_by_surname(B, surname, pos);
    shift_phoneBook(B, pos);
    B.at(pos) = contact{surname, name, number};
}
