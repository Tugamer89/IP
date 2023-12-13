#include <iostream>

using namespace std;

struct Date {
    unsigned int day;
    unsigned int month;
    unsigned int year;

    bool operator==(const Date& other) const {
        return day == other.day && month == other.month && year == other.year;
    }
};

bool isLeap(unsigned int year) {
    if (year % 4 != 0)
		return false;
	if (year % 400 == 0)
		return true;
	if (year % 100 == 0)
		return false;
	return true;
}

bool is30DayMonth (unsigned int month) {
    return month == 4 || month == 6 || month == 9 || month == 11;
}

bool correctDate (const Date& date) {
    if (date.month > 12 || date.month < 1 || date.day < 1)
        return false;

    if (date.month == 2 && date.day > 28 + isLeap(date.year))
        return false;
    else if (date.day > 30 + is30DayMonth(date.month))
        return false;

    return true;
}

bool isPastDate(const Date& current, const Date& other) {
    if (current.year > other.year)
        return true;
    if (current.year < other.year)
        return false;

    if (current.month > other.month)
        return true;
    if (current.month < other.month)
        return false;

    if (current.day > other.day)
        return true;

    return false;
}

int main() {
    Date D, D1;

    cout << "Inserire data corrente (giorno mese anno) in numeri: ";
    cin >> D.day >> D.month >> D.year;

    cout << "Inserire la data da controllare (giorno mese anno) in numeri: ";
    cin >> D1.day >> D1.month >> D1.year;

    if (!correctDate(D1))
        cout << "La data inserita non è corretta" << endl;
    else if (D == D1)
        cout << "La data inserita è oggi" << endl;
    else if (isPastDate(D, D1))
        cout << "La data inserita è passata" << endl;
    else
        cout << "La data inserita è futura" << endl;
    
    return 0;
}
