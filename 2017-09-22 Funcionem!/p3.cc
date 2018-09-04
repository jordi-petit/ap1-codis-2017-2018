#include <iostream>
using namespace std;


// La funció power(x, y) retorna x^y, donat que y>=0.
int power(int x, int y) {
    int p = 1;
    int i = 0;
    while (i < y) {
        p = p * x;
        i = i + 1;
    }
    return p;
}


// Programa que llegeix dos nombres i eleva el primer al segon.
int main() {
    int x, y;
    cin >> x >> y;
    cout << power(x, y) << endl;
}
