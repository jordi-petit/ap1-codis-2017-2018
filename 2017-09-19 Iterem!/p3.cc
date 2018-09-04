// Escriure tots els nombres de n a 1

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = n;
    while (i >= 1) {
        cout << i << endl;
        i = i - 1;
    }
    cout << "al final i=" << i << endl;
}