#include <vector>
#include "cat.h"

using namespace std;

vector<int> cat(const vector<int>& v1, const vector<int>& v2) {
    vector<int> v12 = v1;

    for (int i = 0; i < v2.size(); ++i)
        v12.push_back(v2.at(i));

    return v12;
}