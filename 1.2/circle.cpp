#include <iostream>
#define PI 3.14

using namespace std;

int main() {
    float raggio;

    cout << "Inserire il raggio: ";
    cin >> raggio;

    float area = PI * raggio * raggio;
    float crfc = 2 * PI * raggio;
    cout << "Area = " << area << endl;
    cout << "Circonferenza = " << crfc << endl;

    return 0;
}