// Genera totes els subconjunts de n paraules donades.

#include <iostream>
#include <vector>
#include <string>
using namespace std;


void escriu(const vector<string>& w, const vector<bool>& v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) {
        if (v[i]) {
            cout << w[i] << " ";
        }
    }
    cout << endl;
}  


// Genera totes les combinacions del vector v deixant les 
// i primeres posicions fixades.
void genera(const vector<string>& w, vector<bool>& v, int i) {
    int n = v.size();
    if (i == n) {
        escriu(w, v);
    } else {
        v[i] = false;
        genera(w, v, i + 1);
        v[i] = true;
        genera(w, v, i + 1);
    }
}


int main() {
    int n;
    cin >> n;

    vector<string> w(n);
    for (int i = 0; i < n; ++i) cin >> w[i];

    vector<bool> v(n);
    genera(w, v, 0);
}
