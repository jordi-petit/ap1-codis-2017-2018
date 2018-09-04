// Genera totes les permutacions dels n primers naturals.

#include <iostream>
#include <vector>
using namespace std;


void escriu(const vector<int>& p) {
    for (int i : p) cout << i;
    cout << endl;
}  


// Genera totes les permutacions del vector v deixant les 
// i primeres posicions fixades sabent que el vector u 
// descriu els elements que ja s'han usat a les primeres i posicions.
void genera(vector<int>& p, vector<bool>& u, int i) {
    int n = p.size();
    if (i == n) {
        escriu(p);
    } else {
        for (int j = 0; j < n; ++j) {
            if (not u[j]) {
                p[i] = j;
                u[j] = true;
                genera(p, u, i + 1);
                u[j] = false;
            }
        } 
    }
}


int main() {
    int n;
    cin >> n;

    vector<int> p(n);
    vector<bool> u(n, false);
    genera(p, u, 0);
}
