#include "list.h"

bool insertElemInListAtIndex(List& l, Elem s, unsigned int index) {
	if (index == 0) {
		l = new Cell{s, l};
		return true;
	}

	List precell = l;

	while (precell && --index > 0)
		precell = precell->next;

	if (!precell)
		return false;

	precell->next = new Cell{s, precell->next};
	return true;
}