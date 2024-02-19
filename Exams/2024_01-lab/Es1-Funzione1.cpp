#include "array.h"

bool arrayContainsFibonacciSeries(const int* arr, unsigned int size) {
	int prevs[] = {0, 0};
	
	for (unsigned int i = 0; i < size; ++i) {
		int fib = prevs[0] + prevs[1];

		if (arr[i] != fib)
			return false;

		prevs[0] = i == 1 ? 0 : prevs[1];
		prevs[1] = i == 0 ? 1 : fib;
	}

	return true;
}
