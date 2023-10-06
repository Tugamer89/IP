#include <iostream>
#define PI 3.14

using namespace std;

int main() {
    float raggio;

    cout << "Inserire il raggio: ";
    cin >> raggio;

    float area = PI * raggio * raggio;
    float circonferenza = 2 * PI * raggio;
    cout << "Area = " << area << endl;
    cout << "Circonferenza = " << circonferenza << endl;

    return 0;
}