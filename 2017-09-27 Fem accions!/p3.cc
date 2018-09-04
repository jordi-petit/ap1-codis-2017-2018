// Rellotge

#include <iostream>
#include <unistd.h>
using namespace std;



void escriure_num(int x) {
    if (x < 10) cout << 0;
    cout << x;
}


void escriure_hora(int h, int m, int s) {
    escriure_num(h);
    cout << ":";
    escriure_num(m);
    cout << ":";
    escriure_num(s);
    cout << endl;
}


// Els tres paràmetres es passen per referència!
// Mireu què passa si no es fa.
void sumar_un_segon(int& h, int& m, int&s) {
    s = s + 1;
    if (s == 60) {
        s = 0;
        m = m + 1;
        if (m == 60) {
            m = 0;
            h = h + 1;
            if (h == 24) {                
                h = 0;
            }
        }
    }
    // cout << "xivato: "; escriure_hora(h, m, s);
}


int main() {
    int hores = 0;
    int minuts = 0;
    int segons = 0;
    while (true) {          // bucle infinit, atureu amb Control+C
        escriure_hora(hores, minuts, segons);
        sumar_un_segon(hores, minuts, segons);
        sleep(1);
    }
}
