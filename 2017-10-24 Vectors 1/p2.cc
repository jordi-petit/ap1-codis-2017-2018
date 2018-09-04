#include <iostream>
#include <vector>
using namespace std;


// Funció que retorna l'element més petit d'un vector de reals no buit.

double minim(const vector<double>& v) {
    double m = v.front();
    for (double x : v) {
        if (x < m) {
            m = x;
        }
    }
    return m;
}


// Programa principal que prova minim().

int main() {
    vector<double> v = {2.5, 3.14, 6.0, 1.1, 666.666};
    cout << minim(v) << endl;
}