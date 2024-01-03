#pragma once

typedef int T;

struct cell{
    T data;
    cell* next;
};

typedef cell* list;

void insertElemInOrderedList(list& l, T s);
void printList(const list& l);
void recursive_printList(const list& l);
void recursive_reversePrintList(const list& l);
void recursive_deleteAllElementsFromList(list& l);
bool recursive_isElementInOrderedList(const list& l, T x);
unsigned int recursive_ListLength(const list& l);
bool recursive_insertElemInOrderedList(list& l, T x);
bool recursive_removeElemFromOrderedList(list& l, T x);
