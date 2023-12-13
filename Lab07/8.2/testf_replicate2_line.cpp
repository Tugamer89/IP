#include <iostream>

using namespace std;

void replicate(int n, char c) {
    for (int i = 0; i < n; ++i)
        cout << c;
}

void replicate2_line(int f, char f_c, int s, char s_c) {
    replicate(f, f_c);
    replicate(s, s_c);
}

int main() {
    replicate2_line(3, 's', 7, 'q');

    return 0;
}
