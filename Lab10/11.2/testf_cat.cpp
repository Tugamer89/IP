#include <vector>
#include "cat.h"
#include "../11.1/iovector.h"

using namespace std;

int main() {
    vector<int> first, second;    

    readVectorAlt(first);
    readVectorAlt(second);

    vector<int> total = cat(first, second);

    printVector(first);
    printVector(second);
    printVector(total);

    return 0;
}
