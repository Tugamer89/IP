#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct OutOfRangeError {
    string functionName;
    string paramName;
    string paramValue;
    string customError;
    OutOfRangeError(string fName, string pName, string pValue, string cError) : functionName(fName), paramName(pName), paramValue(pValue), customError(cError) {}
};

int populationAfterYears(int initPop, int pBorn, int nMoved, int years = 1) {
    if (initPop < 0)
        throw OutOfRangeError("populationAfterYears", "initPop", to_string(initPop), "la popolazione iniziale è negativa");
    
    if (abs(pBorn) > 100)
        throw OutOfRangeError("populationAfterYears", "pBorn", to_string(pBorn), "la percentuale di nascite al netto delle morti non è valida");

    if (years < 0)
        throw OutOfRangeError("populationAfterYears", "years", to_string(years), "gli anni sono negativi");

    /*
    int pop = initPop;
    for (int i = 0; i < years; ++i)
        pop += pop * pBorn / 100.0 + nMoved;
    */

    int pop = initPop * pow(1 + pBorn/100.0, years) + nMoved*years;

    if (pop < 0)
        throw OutOfRangeError("populationAfterYears", "nMoved", to_string(nMoved), "si trasferiscono più persone di quante ce ne sono");

    return pop;
}

int main() {
    try {
        int initialPopulation, percentageBorn, numberOfMoved, years;
        
        cout << "Inserire popolazione iniziale: ";
        cin >> initialPopulation;

        cout << "Inserire percentuale di nascite al netto delle morti: ";
        cin >> percentageBorn;
         
        cout << "Inserire numero di persone che si trasferiscono: ";
        cin >> numberOfMoved;
        
        cout << "Inserire numero di anni: ";
        cin >> years;

        int lastPop = populationAfterYears(initialPopulation, percentageBorn, numberOfMoved, years);
        cout << "La popolazione dopo un anno è " << lastPop << endl;
    }
    catch (OutOfRangeError& err) {
        cerr << "\e[31mERRORE: durante la chiamata di " << err.functionName << " con " << err.paramName << " = " << err.paramValue << 
            ", messaggio d'errore: " << err.customError << "!\e[0m" << endl;
    }

    return 0;
}
