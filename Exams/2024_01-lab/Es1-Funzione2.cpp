#include "array.h"
//#include <iostream>

void reverseArray(int* arr, unsigned int size) {
	for (unsigned int i = 0; i < size/2; ++i) {
		int tmp = arr[i];
		arr[i] = arr[size-i-1];
		arr[size-i-1] = tmp;
		//std::swap(arr[i], arr[size-i-1]);
	}
}
