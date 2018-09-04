// Nombre d'elements successius repetits en una seqüència d'enters.

#include <iostream>
using namespace std;

int main() {
    int r = 0;
    int a;
    if (cin >> a) {
        int b;
        while (cin >> b) {
            if (b == a) r = r + 1;
            a = b;
        }
    }
    cout << r << endl;
}
