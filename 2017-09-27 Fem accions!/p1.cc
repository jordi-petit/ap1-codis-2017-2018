// Escriure un rectangle amb accions


#include <iostream>
using namespace std;


// acció que escriu una fila amb n asteríscs
void escriure_fila(int n) {
    int i = 1;
    while (i <= m) {
        cout << '*';
        i = i + 1;
    }
    cout << endl;
}


// acció que escriu un rectangle de m files i n columnes
void escriure_rectangle(int m, int n) {
    int i = 1;
    while (i <= m) {
        escriure_fila(n);
        i = i + 1;
    }
}


// Programa principal
int main() {
    int m, n;
    cin >> m >> n;
    escriure_rectangle(m, n);
}