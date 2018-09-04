// Escriure tots els nombres senars de 1 a n

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        cout << i << endl;
        i = i + 2;
    }
    cout << "al final i=" << i << endl;
}