// Mitjana d'una seqüència (no buida!) de reals
// (recordeu que cal picar Control+D per finalitzar l'entrada al terminal)

#include <iostream>
using namespace std;

int main() {
    double s = 0;
    int n = 0;
    double x;
    while (cin >> x) {
        s = s + x;
        n = n + 1;
    }
    cout << s/n << endl;
}
