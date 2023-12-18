#include <iostream>
#include <vector>

using namespace std;

struct Indirizzo {
    string via;
    int numCiv;
    string CAP;
    string citta;
};

struct Cliente {
    string cognome;
    string nome;
    Indirizzo indrizzo;
};

typedef vector<Cliente> clientsTail;

Cliente front(clientsTail& tail);

void enqueue(clientsTail& tail, const Cliente& client) {
    tail.push_back(client);
}

void dequeue(clientsTail& tail) {
    tail.erase(tail.begin());
}

int main() {
    Cliente c1 = {"Rossi", "Mario", {"via Roma", 18, "000123", "Roma"}};
    Cliente c2 = {"Rossello", "Mariuccio", {"via Napoli", 43, "01230", "Catanzaro"}};
    Cliente c3 = {"Samuel", "Nik", {"via Milazzo", 2, "000123", "Roma"}};

    clientsTail tail1 = {c1, c2, c3};

    for (int i = 0; i < tail1.size(); ++i)
        cout << tail1.at(i).cognome << " ";
    cout << endl;

    dequeue(tail1);
    
    for (int i = 0; i < tail1.size(); ++i)
        cout << tail1.at(i).cognome << " ";
    cout << endl;

    enqueue(tail1, c1);
    
    for (int i = 0; i < tail1.size(); ++i)
        cout << tail1.at(i).cognome << " ";
    cout << endl;

    return 0;
}
