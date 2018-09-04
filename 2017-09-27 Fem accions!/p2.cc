// Escriure un rectangle amb accions (2)


#include <iostream>
using namespace std;


// acció que escriu una fila amb n símbols c
void escriure_fila(int n, char c) {
    int i = 1;
    while (i <= m) {
        cout << c;
        i = i + 1;
    }
    cout << endl;
}


// acció que escriu un rectangle de m files i n columnes
void escriure_rectangle(int m, int n, char c) {
    int i = 1;
    while (i <= m) {
        escriure_fila(n, c);
        i = i + 1;
    }
}


// Programa principal
int main() {
    int m, n;
    char c;
    cin >> m >> n >> c;
    escriure_rectangle(m, n, c);
}