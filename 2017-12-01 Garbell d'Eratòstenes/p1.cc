// Programa per trobar tots els primers entre 0 i n.
// Implementació amb n+1 crides a es_primer()

#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

double now() {
    return clock() / double(CLOCKS_PER_SEC);
}

bool es_primer(int x) {
    if (x <= 1) return false;
    for (int d = 2; d*d <= x; ++d) {
        if (x%d == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    double t1 = now();
    vector<bool> p(n+1);
    for (int i = 0; i <= n; ++i) {
        p[i] = es_primer(i);
    }
    double t2 = now();

    for (int i = 0; i <= n; ++i) if (p[i]) cout << i << endl;
    cout << endl << t2 - t1 << endl;
}
