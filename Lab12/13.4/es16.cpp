#include <iostream>
#include <vector>

using namespace std;

void mergeSort(vector<int>& v) {
    if (v.size() <= 1)
        return;

    vector<int>::iterator mid = v.begin() + v.size()/2;
    vector<int> a(v.begin(), mid);
    vector<int> b(mid, v.end());

    mergeSort(a);
    mergeSort(b);

    size_t ai = 0;
    size_t bi = 0;
    for (size_t i = 0; i < v.size(); ++i) {
        if (ai >= a.size())
            v[i] = b[bi++];
        else if (bi >= b.size())
            v[i] = a[ai++];
        else
            v[i] = a[ai] < b[bi] ? a[ai++] : b[bi++];
    }
}

int main() {
    vector<int> v1 = {5, 0, -5, 15, 4, 42, 3, 5, 9};

    mergeSort(v1);

    for (int elem : v1)
        cout << elem << " ";
    cout << endl;

    return 0;
}
