// Escriure tots els nombres de n a 1
// sense usar la i i modificant la n

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n >= 1) {           
        cout << n << endl;
        n = n - 1;
    }
    cout << "al final n=" << n << endl;
}