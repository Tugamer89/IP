#include "funz.h"

unsigned int numIterSequenzaSiracusa(unsigned int vinit) {
    unsigned int counter = 0;

    for (; vinit > 1; ++counter) {
        if (vinit % 2 == 0)
            vinit /= 2;
        else
            vinit = 3*vinit + 1;
    }

    return counter;
}
