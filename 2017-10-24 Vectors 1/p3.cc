#include <iostream>
#include <vector>
using namespace std;


// Funció que retorna la mitjana d'un vector de reals no buit.

double mitjana(const vector<double>& v) {
    double s = 0.0;
    for (double x : v) {
        s += x;
    }
    return s / v.size();
}



// Programa principal que prova mitjana().

int main() {
    vector<double> v = {2.5, 3.14, 6.0, 1.1, 666.666};
    cout << mitjana(v) << endl;
}
