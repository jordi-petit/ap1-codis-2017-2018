#include <iostream>         // pel cin/cout
#include <vector>           // pels vectors
#include <algorithm>        // pel swap
using namespace std;



// Acció que revessa un vector.

void revessa(vector<int>& v) {
    int esq = 0;
    int dre = v.size() - 1;
    while (esq < dre) {
        swap(v[esq], v[dre]);
        ++esq;
        --dre;
    }
}


int main() {
    vector<int> v = {2, 5, 7, 2, 5, 8, 5};
    revessa(v);
    for (int x : v) cout << v << endl;
}    


