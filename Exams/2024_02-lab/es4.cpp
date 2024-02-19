#include <iostream>
#include "list.h"

unsigned int computeListSize(const List l) {
	if (!l)
		return 0;
	
	Cell* cur = l;
	int count = 1;

	while(cur->next != l) {
		count++;
		cur = cur->next;
	}

    return count;
}

