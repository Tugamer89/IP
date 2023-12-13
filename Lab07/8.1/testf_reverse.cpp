#include <iostream>

using namespace std;

int reverse(int k) {
    int sign = 1;

    if (k < 0) {
        sign = -1;
        k = -k;
    }

    int inv = 0;
    
    while (k > 0) {
        int mod = k % 10;
        k /= 10;
        inv *= 10;
        inv += mod;
    }
    
    return inv * sign;
}

int main() {
    cout << "Inserire un numero intero: ";
    int z;
    cin >> z;

    cout << "\nRovesciando " << z << " si ottiene " << reverse(z) << endl;

    return 0;
}
