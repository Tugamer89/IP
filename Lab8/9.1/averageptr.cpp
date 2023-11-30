#include <iostream>

using namespace std;

int main() {
    const int N = 4;
    float v[N];
    float* p = v;

    for (int i = 0; i <= N-1; ++i)
        cin >> *(p++);

    p = v;
    for (int i = 0; i <= N-1; ++i)
        cout << *(p++) << " ";
    cout << endl;

    float sum = 0;
    p = v;
    for (int i = 0; i <= N-1; ++i)
        sum += *(p++);

    cout << sum/N << endl;

    return 0;
}
