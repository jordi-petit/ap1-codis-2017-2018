// Genera totes les combinacions de vectors de n booleans.

#include <iostream>
#include <vector>
using namespace std;


void escriu(const vector<bool>& v) {
    for (bool b : v) cout << b;
    cout << endl;
}  


// Genera totes les combinacions del vector v deixant les 
// i primeres posicions fixades.
void genera(vector<bool>& v, int i) {
    int n = v.size();
    if (i == n) {
        escriu(v);
    } else {
        v[i] = false;
        genera(v, i + 1);
        v[i] = true;
        genera(v, i + 1);
    }
}


int main() {
    int n;
    cin >> n;

    vector<bool> v(n);
    genera(v, 0);
}
