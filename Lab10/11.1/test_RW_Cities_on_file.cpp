#include <string>
#include <vector>
#include <fstream>
#include <iostream>

using namespace std;

struct city {
    string name;
    int inhabitants;
};

typedef vector<city> cities;

void write_cities_to_file(const cities& C, const string& fileName) {
    ofstream outFile(fileName);
    outFile << C.size() << endl;
    for (size_t i = 0; i < C.size(); ++i)
        outFile << C.at(i).name << " " << C.at(i).inhabitants << endl;
    outFile.close();
}

void read_cities_to_file(cities& C, const string& fileName) {
    ifstream inFile(fileName);

    string data;
    inFile >> data;
    int num = stoi(data);

    for (int i = 0; i < num; ++i) {
        city citta;
        inFile >> citta.name >> citta.inhabitants;
        C.push_back(citta);
    }

    inFile.close();
}

int main() {
    cities C;
    read_cities_to_file(C, "citiesToRead.txt");
    write_cities_to_file(C, "citiesToWrite.txt");

    return 0;
}
