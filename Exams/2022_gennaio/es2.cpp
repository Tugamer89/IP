#include <iostream>
#include <vector>

using namespace std;

typedef int Elem;

void enqueue(vector<Elem>& coda, Elem element);
void dequeue(vector<Elem>& coda);
Elem front(const vector<Elem>& coda);

void dequeue(vector<Elem>& coda) {
    coda.erase(coda.begin());
}

int main() {
    vector<Elem> coda = {6, 123, 93, -9, 902, 0, 2};

    for (int i = 0; i < coda.size(); ++i)
        cout << coda[i] << " ";
    cout << endl;

    dequeue(coda);

    for (int i = 0; i < coda.size(); ++i)
        cout << coda[i] << " ";
    cout << endl;

    return 0;
}
