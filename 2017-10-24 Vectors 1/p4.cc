#include <iostream>
#include <vector>
using namespace std;


// Acció que escala els valors d'un vector v per un factor c.

double escala(vector<double>& v, double c) {
    for (double& x : v) {
        x *= c;
    }
}


// Programa principal que prova escala().

int main() {
    vector<double> v = {2.5, 3.14, 6.0, 1.1, 666.666};
    escala(v, 2.0);
    for (double x : v) {
        cout << x << endl;
    }
}
