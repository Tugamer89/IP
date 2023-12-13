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

int calcYears(int initPop, int pBorn) {
    if (initPop < 0)
        throw OutOfRangeError("calcYears", "initPop", to_string(initPop), "la popolazione iniziale è negativa");
    
    if (abs(pBorn) > 100)
        throw OutOfRangeError("calcYears", "pBorn", to_string(pBorn), "la percentuale di nascite al netto delle morti non è valida");

    if (initPop * pBorn / 100 == 0)
        throw OutOfRangeError("calcYears", "initPop", to_string(initPop), "la popolazione iniziale è troppo bassa");

    if (pBorn == 0)
        return 0;

    /*  -> dynamic programming but bugged when population is < pBorn/100
    int pop = initPop;
    for (int i = 1; ; ++i) {
        pop += pop * pBorn / 100;
        if (pop > 2 * initPop || 2 * pop < initPop)
            return i;
    }

    return -1;
    */

    return log10(pBorn > 0 ? 2 : 0.5) / log10(1 + pBorn/100.0);
}

int main() {
    try {
        int initialPopulation, percentageBorn;

        cout << "Inserire popolazione iniziale: ";
        cin >> initialPopulation;

        cout << "Inserire percentuale di nascite al netto delle morti: ";
        cin >> percentageBorn;
        
        int years = calcYears(initialPopulation, percentageBorn);
        if (years == 0)
            cout << "La popolazione non diventerà mai il doppio o la metà di quella iniziale!" << endl;
        else
            cout << "La popolazione " << (percentageBorn > 0 ? "raddoppierà" : "si dimezzerà") << " dopo " << years << " anni!" << endl;
    }
    catch (OutOfRangeError& err) {
        cerr << "\e[31mERRORE: durante la chiamata di " << err.functionName << " con " << err.paramName << " = " << err.paramValue << 
            ", messaggio d'errore: " << err.customError << "!\e[0m" << endl;
    }

    return 0;
}
