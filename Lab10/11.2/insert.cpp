#include <vector>
#include "insert.h"

using namespace std;

void insert(vector<int>& v, unsigned long int index, int val) {
    if (index > v.size())
        throw 1;

    if (v.size() == 0) {
        v.push_back(val);
        return;
    }

    v.push_back(v.back());

    for (int i = v.size()-2; i >= 0; --i) {
        if (i == index) {
            v.at(i) = val;
            break;
        }

        v.at(i) = v.at(i-1);
    }
}
