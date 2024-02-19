#include <iostream>
#include "list.h"

void deleteAllCircList(List& l, int v) {
	if (!l)
		return;
	
	if (l->next == l && l->elem == v) {
		delete l;
		l = nullptr;
		return;
	}

	Cell* cur = l;
	Cell* prev = l;

	while (prev->next != l)
		prev = prev->next;

	while (l->elem == v && prev != l) {
		prev->next = l->next;
		delete l;
		l = prev->next;
	}

	do {
		if (cur->elem == v) {
			prev->next = cur->next;
			delete cur;
		}
		else
			prev = prev->next;
		cur = prev->next;
	} while (cur != l);

	if (cur->elem == v) {
		delete cur;
		l = nullptr;
	}
}
