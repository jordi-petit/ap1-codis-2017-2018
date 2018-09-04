// Escriure tots els nombres de 1 a n, on n és donat per l'usuari

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        cout << i << endl;
        i = i + 1;
    }
    cout << "al final i=" << i << endl;
}