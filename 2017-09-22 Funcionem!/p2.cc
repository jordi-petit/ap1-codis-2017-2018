#include <iostream>
using namespace std;


// La funció maxim, donats dos enters retorna un enter que és el seu màxim.
int maxim(int a, int b) {
    if (a > b) return a;
    else return b;
}


// La funció maxim3, donats tres enters retorna un enter que és el seu màxim.
int maxim3(int a, int b, int c) {
    return maxim(a, maxim(b, c));
}


// Programa que llegeix tres enters i n'escriu el seu màxim, cridant maxim3().
int main() {
    int x, y, z;
    cin >> x >> y >> z;
    cout << maxim3(x, y, z) << endl;
}