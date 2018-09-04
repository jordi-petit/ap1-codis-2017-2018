// Comptar el nombre de lletres A en un text.
// => Recorregut

#include <iostream>
using namespace std;

int main() {
    int n = 0;
    char c;
    while (cin >> c) {
        if (c == 'A') n = n + 1;
    }
    cout << n << endl;
}
