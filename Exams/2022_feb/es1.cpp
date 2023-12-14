#include <iostream>

using namespace std;

int numDigits(int a) {
    int num = 0;

    if (a < 0)
        a = -a;

    while (a > 0) {
        a /= 10;
        ++num;
    }

    return num;
}

int main() {
    int nums[] = {24, -82, 9029, 5};

    for (int num : nums)
        cout << num << " ha " << numDigits(num) << " cifre" << endl;

    return 0;
}
