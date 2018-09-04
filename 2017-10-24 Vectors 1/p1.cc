
// Comptar el nombre d'ocurrències de darrer element d'una seqüència
// no buida d'enters.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    // llegir el vector
    int x;
    while (cin >> x) {
        v.push_back(x);
    }

    // recórrer tots els elements del vector comptant les ocurrències (n) del darrer element
    int n = 0;
    for (int x : v) {
        if (x == v.back()) {
            ++n;
        }
    }

    // escriure el resultat
    cout << n << endl;
}
