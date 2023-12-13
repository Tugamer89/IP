#include <vector>
#include "selectionSort_vector.h"

using namespace std;

void selectionSort_vector(vector<int>& v, bool ascending) {
    int index;

    for (int i = 0; i < v.size(); ++i) {
        index = i;

        for (int j = i+1; j < v.size(); ++j)
            if ((v.at(j) < v.at(index) && ascending) || (v.at(j) > v.at(index) && !ascending))
                index = j;

        swap(v[i], v[index]);
    }
}