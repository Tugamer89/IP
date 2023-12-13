#include <vector>
#include "reverse_vector.h"

using namespace std;

vector<int> reverse(const vector<int>& v) {
    vector<int> tmp(v.size());

    for (int i = 0; i < v.size(); ++i)
        tmp.at(i) = v.at(v.size()-i-1);

    return tmp;
}
