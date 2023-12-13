#pragma once 

#include <string>

struct cell{ // elemento della lista
    std::string data;
    cell* next;
};

typedef cell* list;

void headInsert(list &l, std::string s);
// inserisce un elemento contenente s in testa alla lista l

void tailInsert(list &l, std::string s);
// inserisce un elemento contenente s in coda alla lista l

void read(list &l); 
// legge valori da input e li memorizza nella lista l
// l'inserimento termina se l'utente inserisce "STOP!"

void print(const list l);
// stampa tutti gli elementi della lista l
// in linea separati da "->"

unsigned int size(const list l);
// ritorna il numero di elementi della lista l

bool isEmpty(const list l);
// ritorna true se la lista l e vuota, false altrimenti

std::string getElem(const list l, unsigned int i);
// ritorna il contenuto dell'i-esimo elemento della lista l
// se l'indice i è invalido solleva un'eccezione

void insertAt(list &l, std::string s, unsigned int i);
// inserisce un elemento contenente s in posizione i nella lista l
// se l'indice i è invalido solleva un'eccezione
// se la lista l è vuota e index > 0 solleva un'eccezione

void deleteAt(list &l, unsigned int i);
// cancella l'elemento in posizione i dalla lista l
// se l'indice i è invalido solleva un'eccezione
// se la lista l è vuota e index > 0 solleva un'eccezione

void deleteOnce(list &l, std::string s);
// cancella dalla lista l il primo elemento contenente s
// (partendo dall'inizio)

void deleteAll(list &l, std::string s);
// cancella dalla lista l tutti gli elementi contenenti s

bool deleteOnce_variant(list& l, std::string s);
// come deleteOnce ma restituisce vero se l’elemento da cancellare è stato trovato, falso altrimenti

int deleteAll_variant(list& l, std::string s);
// come deleteAll ma restituisce un intero pari al numero di occorrenze trovate
