#include <iostream>
#include <vector>

using namespace std;

struct RomanNumeral {
    int value;
    string numeral;
};

void printRomanNumber(int num) {
    int buff = num;
    string romNum = "";

    vector<RomanNumeral> numerals = {
        {1000, "M"},
        {900, "CM"},
        {500, "D"},
        {400, "CD"},
        {100, "C"},
        {90, "XC"},
        {50, "L"},
        {40, "XL"},
        {10, "X"},
        {9, "IX"},
        {5, "V"},
        {4, "IV"},
        {1, "I"}
    };

    for (const auto &numeral : numerals) {
        while (buff >= numeral.value) {
            romNum += numeral.numeral;
            buff -= numeral.value;
        }
    }

    cout << num << " in numeri romani si rappresenta come " << romNum << endl;
}

int main() {
    int num;
    cout << "Inserire un numero intero compreso tra 1 e 3000: ";
    cin >> num;

    while (num < 1 || num > 3000) {
        cout << "ERRORE: hai inserito un numero non valido!\nInserisci un numero intero maggiore o uguale a zero: ";
        cin >> num;
    }

    printRomanNumber(num);

    return 0;
}
