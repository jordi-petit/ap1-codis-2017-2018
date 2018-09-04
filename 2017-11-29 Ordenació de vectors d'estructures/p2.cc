// Programa que llegeix un text i escriu la freqüència
// de cada lletra, en ordre alfabètic.

#include <cctype>
#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector<int> compt('z' - 'a' + 1, 0);

    int n = 0;
    char c;
    while (cin >> c) {
        if (isalpha(c)) {
            ++n;
            c = tolower(c);
            ++compt[c - 'a'];
        }
    }

    for (char c = 'a'; c <= 'z'; ++c) {
        cout << c << " " << compt[c - 'a'] * 100.0 / n << endl;
    }    
}
