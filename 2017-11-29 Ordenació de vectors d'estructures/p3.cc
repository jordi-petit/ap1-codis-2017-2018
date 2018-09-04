// Programa que llegeix un text i escriu la freqüència
// de cada lletra, ordenada de més a menys freqüent.

#include <cctype>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


struct Freq {
    char c;
    double f;
};


bool comp(const Freq& f1, const Freq& f2) {
    if (f1.f != f2.f) return f1.f > f2.f;
    return f1.c < f2.c;
}


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

    vector<Freq> freqs;
    for (char c = 'a'; c <= 'z'; ++c) {
        freqs.push_back({c, compt[c-'a']*100.0/n});
    }

    sort(freqs.begin(), freqs.end(), comp);

    for (Freq f : freqs) {
        cout << f.c << " " << f.f << endl;
    }
}
