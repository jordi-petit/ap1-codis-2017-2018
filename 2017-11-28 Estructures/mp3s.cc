#include <iostream>
#include <string>
#include <vector>
using namespace std;


struct CancoMP3 {
    string artista;
    string titol;
    int estrelletes;    // de 0 a 5
    int duracio;        // segons
};


void escruire_canco(const CancoMP3& c) {
    cout << "   " << c.titol << endl;
    cout << "   " << c.artista << endl;
    cout << "   ";
    for (int i = 0; i < c.estrelletes; ++i) cout << "*";
    cout << endl;
    cout << "   " << c.duracio << endl;
    cout << endl;
}


struct Disc {
    string titol;
    double preu;
    vector<CancoMP3> cancons;
};


double estrelletes_mitjana(const Disc& d) {
    double s = 0;
    for (auto c : d.cancons) {
        s += c.estrelletes;
    }
    return s / d.cancons.size();
}


void escruire_disc(const Disc& d) {
    cout << "titol:   " << d.titol << endl;
    cout << "preu:    " << d.preu  << endl;
    cout << "mitjana: " << estrelletes_mitjana(d) << endl;
    cout << endl;
    for (const CancoMP3& c : d.cancons) {
        escruire_canco(c);
    }
    cout << endl;
}

int main() {
    Disc disc;
    disc.titol = "Exitos de los 90";
    disc.preu = 2.99;

    // afegir una cançó
    CancoMP3 c0;
    c0.artista = "Los Morancos";
    c0.titol = "Ella";
    c0.estrelletes = 3;
    c0.duracio = 421;
    disc.cancons.push_back(c0);

    // afegir una altra cançó
    CancoMP3 c1 = {
        "Alaska", 
        "A quien le importa", 
        0, 
        345
    };
    disc.cancons.push_back(c1);

    // afegir una darrera  cançó
    disc.cancons.push_back({"REM", "Tampoc ho se", 4, 345});
    
    escruire_disc(disc);
}
