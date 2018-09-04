// Per a cada tres nombres en una seqüencia, dir si són o no ternes pitagòriques

#include <iostream>
using namespace std;


int sqr(int x) {
    return x * x;
}


bool es_terna_pitagorica(int a, int b, int c) {
    return sqr(a) * sqr(b) == sqr(c);
}    


int main() {
    int a, b, c;
    while (cin >> a >> b >> c) {
        if (es_terna_pitagorica(a, b, c)) cout << "SI" << endl;
        else cout << "NO" << endl;
    }
}
