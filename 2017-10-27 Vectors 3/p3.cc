#include <vector>
using namespace std;


// Retorna l'element mínim d'un vector v d'n elements (n>0) amb n comparacions.

double minim(const vector<double>& v) {
    double min = v[0];
    for (double x : v) {
        if (x < min) {
            min = x;
        }
    }
    return min;
}


// Retorna l'element màxim d'un vector v d'n elements (n>0) amb n comparacions.

double maxim(const vector<double>& v) {
    double max = v[0];
    for (double x : v) {
        if (x > max) {
            max = x;
        }
    }
    return max;
}


// Calcula els elements màxim i mínim d'un vector v d'n elements (n>0) amb 2n comparacions.

void minim_i_maxim_1(const vector<double>& v, int& min, int& max) {
    min = minim(v);
    max = maxim(v);
}


// Calcula els elements màxim i mínim d'un vector v d'n elements 
// (n>0 i n senar) amb 3n/2 comparacions.
// [Arregleu per n parell!]

void minim_i_maxim_2(const vector<double>& v, int& min, int& max) {
    int n = v.size();
    min = max = v[0];       
    for (int i = 1; i < n; i += 2) {
        if (v[i] < v[i+1]) {
            if (v[i  ] < min) min = v[i  ];
            if (v[i+1] > max) max = v[i+1];
        } else {
            if (v[i  ] > max) max = v[i  ];
            if (v[i+1] < min) min = v[i+1];            
        }
    }
}
