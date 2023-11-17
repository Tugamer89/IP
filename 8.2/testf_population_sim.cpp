#include <iostream>
#include <string>

using namespace std;

struct OutOfRangeError {
    string functionName;
    string paramName;
    string paramValue;
    OutOfRangeError(string fName, string pName, string pValue) : functionName(fName), paramName(pName), paramValue(pValue) {}
};

int populationAfterYears(int initPop, int pBorn, int nMoved, int years = 1) {
    if (initPop < 0)
        throw OutOfRangeError("populationAfterYears", "initPop", to_string(initPop));
    
    if (abs(pBorn) > 100)
        throw OutOfRangeError("populationAfterYears", "pBorn", to_string(pBorn));

    int pop = initPop;
    for (int i = 0; i < years; ++i)
        pop += pop * pBorn / 100.0 + nMoved;

    if (pop < 0)
        throw (string)"la popolazione finale è negativa";

    return pop;
}

int main() {
    try {
        int initialPopulation, percentageBorn, numberOfMoved;
        
        cout << "Inserire popolazione iniziale: ";
        cin >> initialPopulation;

        cout << "Inserire percentuale di nascite al netto delle morti: ";
        cin >> percentageBorn;
         
        cout << "Inserire numero di persone che si trasferiscono: ";
        cin >> numberOfMoved;
        
        int lastPop = populationAfterYears(initialPopulation, percentageBorn, numberOfMoved);
        cout << "La popolazione dopo un anno è " << lastPop << endl;
    }
    catch (OutOfRangeError& err) {
        cerr << "ERRORE: durante la chiamata di " << err.functionName << " con " << err.paramName << " = " << err.paramValue << endl;
    }
    catch (string& err) {
        cerr << "ERRORE: " << err << "!" << endl;
    }

    return 0;
}
