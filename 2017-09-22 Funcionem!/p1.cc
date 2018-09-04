#include <iostream>
using namespace std;


// La funció maxim, donats dos enters retorna un enter que és el seu màxim.
int maxim(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}


// Programa que llegeix dos enters i n'escriu el seu màxim, cridant maxim().
int main() {
    int x, y;
    cin >> x >> y;
    cout << maxim(x, y) << endl;
}