#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Inserire due numeri interi: ";
    cin >> a >> b;

    float mean = (a + b) / 2.0;
    cout << "Media = " << mean << endl;

    return 0;
}
