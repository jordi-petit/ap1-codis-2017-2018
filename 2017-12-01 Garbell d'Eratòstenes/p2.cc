// Programa per trobar tots els primers entre 0 i n.
// Implementació amb Garbell d'Erastòtones

#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

double now() {
    return clock() / double(CLOCKS_PER_SEC);
}

int main() {
    int n;
    cin >> n;

    double t1 = now();
    vector<bool> p(n+1, true);
    p[0] = p[1] = false;
    for (int i = 2; i*i <= n; ++i) {
        if (p[i]) {
            for (int j = i+i; j <= n; j += i) {
                p[j] = false;
            }
        }
    }
    double t2 = now();

    for (int i = 0; i <= n; ++i) if (p[i]) cout << i << endl;
    cout << endl << t2 - t1 << endl;
}
