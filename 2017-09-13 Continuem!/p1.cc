/* Descomposició horària. */

#include <iostream>
using namespace std;

int main() {
    int n;                                          // Declaració de la variable d'entrada
    cin >> n;                                       // Lectura de l'entrada
    int h = n / 3600;                               // Càlcul del nombre d'hores
    int m = (n % 3600) / 60;                        // Càlcul del nombre de minuts
    int s = n % 60;                                 // Càlcul del nombre de segons
    cout << h << " " << m << " " << s << endl;      // Escriptura de les sortides
}
