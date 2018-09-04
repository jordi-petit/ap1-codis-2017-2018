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



void merge(vector<double>& v, int i, int m, int j) {
    vector<double> r;
    int i1 = i;
    int i2 = m+1;
    while (i1 <= m and i2 <= j) {
        if (v[i1] <= v[i2]) {
            r.push_back(v[i1]);
            ++i1;
        } else {
            r.push_back(v[i2]);
            ++i2;
        }
    }
    while (i1 <= m) {
        r.push_back(v[i1]);
        ++i1;
    }
    while (i2 <= j) {
        r.push_back(v[i2]);
        ++i2;
    }
    for (int i3 = i; i3 <= j; ++i3) {
        v[i3] = r[i3 - i];
    }
}


void mergesort(vector<double>& v, int i, int j) {
    if (i < j) {
        int m = (i+j) / 2;
        mergesort(v, i, m);
        mergesort(v, m+1, j);
        merge(v, i, m, j);
    }
}


void ordena_per_fusio(vector<double>& v) {
    mergesort(v, 0, v.size() - 1);
}


int main() {
    srand(time(0));
    int n;
    cin >> n;
    vector<double> v(n);
    for (int i = 0; i < n; ++i) {
        v[i] = rand() / double(RAND_MAX);
    }

    double t1 = now();    
    ordena_per_fusio(v);
    double t2 = now();

    cout << t2 - t1 << endl;

    for (int i = 0; i < n-1; ++i) {
        assert(v[i] <= v[i+1]);
    }
}
