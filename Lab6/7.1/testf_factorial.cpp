#include <iostream>

using namespace std;

int factorial(int n) {
    if (n < 0) {
        cerr << "Il numero è minore di zero" << endl;
        return -1;
    }
    
    if (n == 0)
        return 1;

    for (int i = n-1; i > 1; --i)
        n *= i;

    return n;
}

int main() {
    cout << "Inserire un numero positivo: ";
    int num;
    cin >> num;

    int fact = factorial(num);

    if (fact >= 0)
        cout << fact << " è il fattoriale di " << num << endl;
    else
        cerr << "ERRORE" << endl;

    return 0;
}
