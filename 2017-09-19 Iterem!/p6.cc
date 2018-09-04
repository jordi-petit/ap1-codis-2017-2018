// Calcular el factorial d'un natural

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int f = 1;
    int i = 1;
    while (i <= n) {
        f = f * i;
        i = i + 1;
    }
    cout << f << endl;
}