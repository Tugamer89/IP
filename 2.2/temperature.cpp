#include <iostream>

using namespace std;

static inline bool between(int min, int value, int max) {
    return value >= min && value <= max;
}

int main() {
    int Temp;
    cout << "Inserire temperatura: ";
    cin >> Temp;

    if (between(-20, Temp, 0))
        cout << "Freddo dannato" << endl;

    else if (between(1, Temp, 15))
        cout << "Freddo" << endl;

    else if (between(16, Temp, 23))
        cout << "Normale" << endl;

    else if (between(24, Temp, 30))
        cout << "Caldo" << endl;
        
    else if (between(31, Temp, 40))
        cout << "Caldo da morire" << endl;

    else
        cout << "Non ci credo, il termometro deve essere rotto" << endl;

    return 0;
}
