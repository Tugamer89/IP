#include <iostream>

using namespace std;

struct array_dinamico {
    int *d;
    int size;
    int capacity;   
};

/*
    la situazione schematizzata non descrive correttamente
    un array_dinamico perché nello stack ci dovrebbe essere
    un puntatore ad un array e non un array
*/

array_dinamico init_ad(unsigned int size = 0) {
    array_dinamico tmp;
    if (size == 0)
        tmp.d = nullptr;
    else
        tmp.d = new int[size];
    tmp.size = size;
    tmp.capacity = size;
    return tmp;
}

int main() {
    array_dinamico a = init_ad();
    cout << "Dynamic array a:" << endl;
    cout << "d = " << static_cast<void*>(a.d) << endl;
    cout << "size = " << a.size << endl;
    cout << "capacity = " << a.capacity << endl;

    array_dinamico b = init_ad(5);
    cout << "\nDynamic array b:" << endl;
    cout << "d = " << static_cast<void*>(b.d) << endl;
    cout << "size = " << b.size << endl;
    cout << "capacity = " << b.capacity << endl;

    return 0;
}
