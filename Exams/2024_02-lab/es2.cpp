#include "array.h"

bool ascendingSequence(const int* arr, unsigned int dim) {
	for (unsigned int i = 1; i < dim; i++)
		if (arr[i-1] > arr[i])
			return false;
	return true; 
}
