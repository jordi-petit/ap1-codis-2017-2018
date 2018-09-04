// Màxim de dos enters

#include <iostream>
using namespace std;

int main() {
    int x, y;           // declaració de variables
    cin >> x >> y;      // lectura de les dades d'entrada
    // càlcul del resultat
    int m;
    if (x > y) {
        m = x;
    } else {
        m = y;
    }
    cout << m << endl;  // escriptura de la dada de sortida
}
