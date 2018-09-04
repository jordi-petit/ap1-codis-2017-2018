// Trobar si hi ha alguna lletra A en un text.
// => Cerca

#include <iostream>
using namespace std;

int main() {
    bool trobat = false;
    char c;
    while (not trobat and cin >> c) {
        trobat = c == 'a';
    }
    cout << (trobat ? "SI" : "NO") << endl;
}

