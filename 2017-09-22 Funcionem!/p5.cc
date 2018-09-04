#include <iostream>
using namespace std;


// La funció primer(n) retorna si el natural n és o no un nombre primer.
bool primer(int n) {
    if (n <= 1) return false;
    // Mira si algun nombre entre 2 i √n divideix n.
    int c = 2;
    while (c*c <= n) {      // equivalent a c ⩽ √n   (look ma... no reals! 😄)
        if (n % c == 0) return false;
        c = c + 1;
    }
    return true;
}


// Programa que escriu tots els primers entre 0 i un nombre donat.
int main() {
    int n;
    cin >> n;
    int i = 0;
    while (i <= n) {
        if (primer(i)) cout << i << endl;
        i = i + 1;
    }
}
