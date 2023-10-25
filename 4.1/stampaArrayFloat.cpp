#include <iostream>

using namespace std;

int main() {
    float a[5] = {2.4, 5.67, 34, 28.456, 846.42};

    for (int i = 4; i >= 0; --i)
        cout << a[i] << endl;

    return 0;
}
