#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cassert>
using namespace std;


double now() {
    return clock() / double(CLOCKS_PER_SEC);
}

// Retorna la posició de l'element més petit en v[i..n-1].
int posicio_minim(const vector<double>&v, int i) {
    int n = v.size();
    int p = i;
    for (int j = i+1; j < n; ++j) {
        if (v[j] < v[p]) {
            p = j;
        }
    }
    return p;
}

// Ordena el vector v creixentment amb ordenació per selecció
void ordenacio_per_seleccio(vector<double>& v) {
    int n = v.size();
    for (int i = 0; i < n - 1; ++i) {
        int p = posicio_minim(v, i);
        swap(v[i], v[p]);
    }
}


int main() {
    // Crea un vector amb n valors entre 0.0 i 1.0 a l'atzar
    srand(time(0));
    int n;
    cin >> n;
    vector<double> v(n);
    for (int i = 0; i < n; ++i) {
        v[i] = rand() / double(RAND_MAX);
    }

    // Ordena el vector cronometrant el temps
    double t1 = now();
    ordena(v);
    double t2 = now();

    // Escriu el temps
    cout << t2 - t1 << endl;
  
    // Verifica que el vector estigui ordenat
    for (int i = 0; i < n-1; ++i) {
        assert(v[i] <= v[i+1]);
    }
}