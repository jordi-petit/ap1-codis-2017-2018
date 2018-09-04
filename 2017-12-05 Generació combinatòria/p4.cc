// Genera totes les permutacions de n paraules donades.

#include <iostream>
#include <vector>
#include <string>
using namespace std;


void escriu(const vector<string>& w, const vector<int>& p) {
    int n = p.size();
    for (int i = 0; i < n; ++i) {
        cout << w[p[i]] << " ";
    }
    cout << endl;
}  


// Genera totes les permutacions del vector v deixant les 
// i primeres posicions fixades sabent que el vector u 
// descriu els elements que ja s'han usat a les primeres i posicions.
void genera(const vector<string>& w, vector<int>& p, vector<bool>& u, int i) {
    int n = p.size();
    if (i == n) {
        escriu(w, p);
    } else {
        for (int j = 0; j < n; ++j) {
            if (not u[j]) {
                p[i] = j;
                u[j] = true;
                genera(w, p, u, i + 1);
                u[j] = false;
            }
        } 
    }
}


int main() {
    int n;
    cin >> n;

    vector<string> w(n);
    for (int i = 0; i < n; ++i) cin >> w[i];

    vector<int> p(n);
    vector<bool> u(n, false);
    genera(w, p, u, 0);
}
