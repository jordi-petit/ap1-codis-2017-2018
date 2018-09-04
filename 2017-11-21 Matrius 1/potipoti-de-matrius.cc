#include <iostream>
#include <vector>
using namespace std;


using Fila = vector<double>;
using Matriu = vector<Fila>;


// Prec: a i b son de la mateixa mida i no son buides
Matriu suma(const Matriu& a, const Matriu& b) {
    int m = a.size();           // nb files
    int n = a[0].size();        // nb columnes
    Matriu r = a;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            r[i][j] += b[i][j];
        }
    }
    return r;
}


// Prec: a és m×n, i b és n×p i no son buides
Matriu prod(const Matriu& a, const Matriu& b) {
    int m = a.size();   
    int n = a[0].size();
    int p = b[0].size();   
    Matriu r(m, Fila(p));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < p; ++j) {
            double s = 0;
            for (int k = 0; k < n; k++) {
                s += a[i][k] * b[k][j];
            }
            r[i][j] = s;
        }
    }
    return r;
}

// Prec: a no és buida
Matriu transposta(const Matriu& a) {
    int n = a.size();
    int m = a[0].size();
    Matriu r(m, Fila(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            r[j][i] = m[i][j];
        }
    }
    return r;
}


// Prec: a és quadrada
bool es_simetrica(const Matriu& a) {
    int n = a.size();
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            if (a[i][j] != a[j][i]) {
                return false;
            }
        }
    }
    return true;
}

// Prec: a és quadrada 
bool hi_es(const Matriu& a, double x) {
    int n = a.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (a[i][j] == x) {
                return true;
            }
        }
    }
    return false;
}


void escriu(const Matriu& a) {
    int m = a.size();           // nb files
    int n = a[0].size();        // nb columnes
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }    
}

int main() {
    Matriu a = {
        {5, 3, 5, 6},
        {1, 3, 3, 9},
        {5, 2, 4, 1}
    };
    Matriu b = {
        {1, 3, 7},
        {1, 2, 3},
        {5, 2, 4},
        {5, 2, 4}
    };
    Matriu c = prod(a, b);
    escriu(c);
}
