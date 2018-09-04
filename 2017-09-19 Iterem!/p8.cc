// Calcular l'n-èsim número de Fibonacci

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = 0;
    int b = 1;
    int i = 1;
    while (i <= n) {
        int c = a;
        a = b;
        b = b + c;
        i = i + 1;
    }
    cout << a << endl;
}