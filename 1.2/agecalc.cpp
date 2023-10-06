#include <iostream>
#include <time.h>

using namespace std;


int main() {
    int year;

    cout << "Inserire anno di nascita: ";
    cin >> year;

    time_t currentTime = time(NULL);
    int eta = localtime(&currentTime)->tm_year + 1900 - year;

    cout << "Tu hai " << eta << " anni\n";

    return 0;
}
