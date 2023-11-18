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

static inline bool isPalindrome(int n) {
    return n == reverse(n);
}

int main() {
    cout << "Inserire un numero intero: ";
    int z;
    cin >> z;

    cout << "Il numero " << z;
    if (!isPalindrome(z))
        cout << " non";
    cout << " è palindromo" << endl;

    return 0;
}
