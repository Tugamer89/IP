#include "list.h"

unsigned int computeListSize(const List& l) {
	if (!l)
		return 0;
	if (!l->next)
		return 1;
	return computeListSize(l->next) + 1;
}
