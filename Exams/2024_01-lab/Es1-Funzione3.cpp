#include "array.h"

int findEquilibriumIndex(const int* arr, unsigned int size) {
	for (unsigned int i = 0; i < size; ++i) {
		int value = 0;

		for (unsigned int j = 0; j < i; ++j)
			value += arr[j];
		for (unsigned int j = i+1; j < size; ++j)
			value -= arr[j];

		if (value == 0)
			return i;
	}

	return -1;
}
