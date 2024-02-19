#include "list.h"

void deleteLastInstanceOfElemInList(List& l, Elem s) {
	if (!l)
		return;

	List preLastInstance = nullptr;
	List lastInstance = l->elem == s ? l : nullptr;

	List tmp = l;
	while (tmp->next) {
		if (tmp->next->elem == s) {
			lastInstance = tmp->next;
			preLastInstance = tmp;
		}
		tmp = tmp->next;
	}

	if (!lastInstance)
		return;

	List nextCell = lastInstance->next;
	delete lastInstance;

	if (preLastInstance)
		preLastInstance->next = nextCell;
	else
		l = nextCell;
}