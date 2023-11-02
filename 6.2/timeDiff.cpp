#include <iostream>

using namespace std;

struct Time {
    unsigned int seconds;
    unsigned int minutes;
    unsigned int hours;

    bool operator>(const Time& other) const {
        if (hours > other.hours)
            return true;
        if (hours < other.hours)
            return false;

        if (minutes > other.minutes)
            return true;
        if (minutes < other.minutes)
            return false;

        if (seconds > other.seconds)
            return true;

        return false;
    }

    bool operator<=(const Time& other) const {
        return !operator>(other);
    }

    Time operator-(const Time& other) const {
        Time newTime;
        short borrow = 0;

        if (seconds < other.seconds) {
            borrow = 1;
            newTime.seconds = 60 + seconds - other.seconds;
        } else
            newTime.seconds = seconds - other.seconds;

        if (minutes < other.minutes + borrow) {
            borrow = 1;
            newTime.minutes = 60 + minutes - (other.minutes + borrow);
        } else
            newTime.minutes = minutes - (other.minutes + borrow--);

        newTime.hours = hours - (other.hours + borrow);

        return newTime;
    }
};

static inline bool isIncorrectTime(const Time& time) {
    return time.minutes >= 60 || time.minutes < 0 || time.seconds >= 60 || time.seconds < 0 || time.hours >= 24 || time.hours < 0;
}

int main() {
    Time T1, T2;

    cout << "Inserire il primo orario (ore minuti secondi): ";
    cin >> T1.hours >> T1.minutes >> T1.seconds;

    cout << "Inserire il secondo orario (ore minuti secondi): ";
    cin >> T2.hours >> T2.minutes >> T2.seconds;

    if (isIncorrectTime(T1) || isIncorrectTime(T2)) {
        cerr << "Gli orari inseriti non sono corretti" << endl;
        return 1;
    }

    if (T1 <= T2) {
        Time newTime = T2 - T1;
        cout << "Sono trascorse " << newTime.hours << " ore, " << newTime.minutes << " minuti e " << newTime.seconds << " secondi" << endl;
    }
    else
        cout << "Il primo orario non è precedente al secondo" << endl;

    return 0;
}