#include <iostream>

using namespace std;

int main() {
    string s1 = "Hello";
    string s2 = "World";

    cout << "Variabile s1: " << s1 << " " << static_cast<void*>(&s1) << endl;
    cout << "Variabile s2: " << s2 << " " << static_cast<void*>(&s2) << endl;

    string* p = &s1;
    cout << "p contiene " <<  static_cast<void*>(p) << " mentre con *p si ottiene " << *p << endl;

    *p = "Ciao";
    cout << "p contiene " <<  static_cast<void*>(p) << " mentre con *p si ottiene " << *p << endl;

    p = &s2;
    cout << "p contiene " <<  static_cast<void*>(p) << " mentre con *p si ottiene " << *p << endl;

    *p = "Mondo";
    cout << "p contiene " <<  static_cast<void*>(p) << " mentre con *p si ottiene " << *p << endl;

    cout << "Variabile s1: " << s1 << " " << static_cast<void*>(&s1) << endl;
    cout << "Variabile s2: " << s2 << " " << static_cast<void*>(&s2) << endl;

    return 0;
}
