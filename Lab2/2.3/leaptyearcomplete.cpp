#include <iostream>

using namespace std;

bool isLeap(int year) {
    if (year % 4 != 0)
		return false;
	if (year % 400 == 0)
		return true;
	if (year % 100 == 0)
		return false;
	return true;
}

int main() {
    int year;
    cout << "Inserire anno: ";
    cin >> year;

    cout << "L'anno " << year;
    if (!isLeap(year))
        cout << " non";
    cout << " è bisestile" << endl;

    return 0;
}
