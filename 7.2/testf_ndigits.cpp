#include <iostream>
#include <cmath>

using namespace std;

int getLength(int n) {
    return n > 0 ? log10(abs(n)) + 1 : 1;
}

int main() {
    int elementsToTest[] = {0, 5, 23, 482, 98, 1623, -5};

    for (int elem : elementsToTest)
        cout << "Il numero " << elem << " ha " << getLength(elem) << " cifr" << (getLength(elem) > 1 ? "e!" : "a!") << endl;

    return 0;
}
