#include <iostream>

using namespace std;

void printArray(const char s[], int size) {
    const char* p = s;
    for (int i = 0; i < size; ++i)
        cout << *(p++);
}


int main() {
    char msg[] = "Hello, world";
    const int N = sizeof(msg)/sizeof(char);
    printArray(msg, N);

    return 0;
}
