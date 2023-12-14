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

array_dinamico init_ad() {
    array_dinamico tmp;
    tmp.d = nullptr;
    tmp.size = 0;
    tmp.capacity = 0;
    return tmp;
}

int main() {
    array_dinamico a = init_ad();
    cout << "d = " << static_cast<void*>(a.d) << endl;
    cout << "size = " << a.size << endl;
    cout << "capacity = " << a.capacity << endl;

    return 0;
}
