#include <iostream>
#include <string>

#define MAXN 10000

using namespace std;

struct Date {
    unsigned int day;
    unsigned int month;
    unsigned int year;

    bool operator<(const Date& other) const {
        if (year > other.year)
            return true;
        if (year < other.year)
            return false;

        if (month > other.month)
            return true;
        if (month < other.month)
            return false;

        if (day > other.day)
            return true;
        return false;
    }
};

struct Student {
    string name;
    string surname;
    Date dateOfBirth;
    unsigned int id;
    float averageMarks;
};

int main() {
    Student students[MAXN];
    int N;

    cout << "Inserire numero di studenti da inserire: ";
    cin >> N;
    
    for (int i = 0; i < N; ++i) {
        cin.ignore(100000, '\n');
        cout << "Inserire nome " << i+1 << "-esimo studente: ";
        getline(cin, students[i].name);

        cout << "Inserire cognome " << i+1 << "-esimo studente: ";
        getline(cin, students[i].surname);

        cout << "Inserire data di nascita " << i+1 << "-esimo studente (giorno mese anno) in numeri: ";
        cin >> students[i].dateOfBirth.day >> students[i].dateOfBirth.month >> students[i].dateOfBirth.year;

        cout << "Inserire matricola " << i+1 << "-esimo studente: ";
        cin >> students[i].id;

        cout << "Inserire voto medio " << i+1 << "-esimo studente: ";
        cin >> students[i].averageMarks;
    }

    for (int i = 0; i < N-1; ++i)
        for (int j = 0; j < N-i-1; ++j)
            if (students[j].dateOfBirth < students[j+1].dateOfBirth)
                swap(students[j], students[j+1]);

    cout << "\nStudenti:" << endl;
    for (int i = 0; i < N; ++i)
        cout << i+1 << ") " << students[i].name << " " << students[i].surname << 
            " nato/a il " << students[i].dateOfBirth.day << "/" << students[i].dateOfBirth.month << "/" << students[i].dateOfBirth.year <<
            " matricola N. " << students[i].id << " ha una media del " << students[i].averageMarks << endl;

    return 0;
}
