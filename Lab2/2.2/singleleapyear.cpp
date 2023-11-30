#include <iostream>

using namespace std;

int main() {
    int year;
    cout << "Inserire anno: ";
    cin >> year;

    cout << "L'anno " << year;
    if (year % 4 != 0)
        cout << " non";
    cout << " è bisestile" << endl;

    return 0;
}
