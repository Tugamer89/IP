#include "list.h"

using namespace std;

void inserimentoInTesta(List& list, City newCity) {
    list = new Cell{newCity, list, nullptr};
    if (list->next)
        list->next->prev = list;
}

string stampaAndata(List list) {
    if (!list)
        return "";
    if (!list->next)
        return list->city;
    return list->city + "," + stampaAndata(list->next);
}

string stampaRitorno(List list) {
    if (!list)
        return "";
    if (!list->next)
        return list->city;
    return stampaRitorno(list->next) + "," + list->city;
}

string stampaAdiacenti(List list, City newCity) {
    if (!list)
        return "-,-,-";
    if (list->city == newCity)
        return (list->prev ? list->prev->city : "-") +
               "," + list->city + "," +
               (list->next ? list->next->city : "-");
    return stampaAdiacenti(list->next, newCity);
}
