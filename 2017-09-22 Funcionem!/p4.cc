#include <iostream>
using namespace std;


// La funció primer(n) retorna si el natural n és o no un nombre primer.
bool primer(int n) {
    if (n <= 1) return false;
    // Mira si algun nombre entre 2 i n-1 divideix n:
    int c = 2;
    while (c < n) {
        if (n % c == 0) return false;
        c = c + 1;
    }
    return true;
}


// Programa que llegeix un natural i diu si és primer o no.
int main() {
    int n;
    cin >> n;
    if (primer(n)) cout << "si" << endl;
    else cout << "no" << endl;
}
