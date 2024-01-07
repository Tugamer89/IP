#ifndef SETDLL
#define SETDLL

struct set_cell{
    int data;
    set_cell* next;
    set_cell* prev;
};

typedef set_cell* set_dll;

void insert_set_dll(set_dll &s, int v);
void print_set_dll(const set_dll &s);
void revprint_set_dll(const set_dll &s);
set_dll union_set_dll(const set_dll &s1, const set_dll &s2);
set_dll intersect_set_dll(const set_dll &s1, const set_dll &s2);

#endif
