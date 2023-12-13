#include <vector>
#include "sequentialSearch_vector.h"

using namespace std;

int sequentialSearch_vector(const vector<int>& v, int item) {
    /*
    int loc = -1;
    bool found = false;

    for (int i = 0; i < v.size() && !found; ++i) {
        if (v.at(i) == item) {
            found = true;
            loc = i;
        }
    }

    return loc;
    */

    for (int i = 0; i < v.size(); ++i)
        if (v.at(i) == item)
            return i;

    return -1;
}
