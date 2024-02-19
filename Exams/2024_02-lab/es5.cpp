#include <iostream>
#include "list.h"

bool allDiffInCircList(const List l) {
	if (!l || l->next == l)
		return true;

	Cell* cur = l;
	Cell* aux = nullptr;

	do {
		aux = cur;
		cur = cur->next;

		while (cur != l) {
			if (aux->elem == cur->elem)
				return false;
			cur = cur->next;
		}

		cur = aux->next;
	} while (cur != l);

	return true;
}
