// Cerca binària en un vector ordenat


#include <iostream>
#include <vector>
#include <cstdlib>              // permet usar el rand() i el srand()
#include <ctime>                // permet usar el time() i el clock()
using namespace std;


// La funció now() dóna el temps de processador usat des del principi del procés, en segons.
// Típicament s'utilitza per mesuras diferències de temps (com al main()).
// Més informació: man clock

double now() {
    return clock() / double(CLOCKS_PER_SEC);
}


// Prec: El vector v està ordenat creixentment.
// Retorna un índex i tq v[x]==i si x és en v
// i, sinó, retorna -1.
// Temps: O(log n).

int cerca_binaria(const vector<int>& v, int x) {
    int n = v.size();
    int esq = 0;
    int dre = n - 1;
    while (esq <= dre) {
        int mig = (esq + dre) / 2;
             if (v[mig] < x) esq = mig + 1;        
        else if (v[mig] > x) dre = mig - 1;
        else return mig;
    }
    return -1;
}


int main() {
    // inicialitza el generador de nombres aleatoris en funció de l'hora actual
    srand(time(0));

    // llegeix mida del vector, el crea i l'omple amb valors creixents parells
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        v[i] = 2*i;
    }

    // crida la cerca binària sobre un element x senar (que no trobarà)
    // tot cronometrant el temps.
    int x = 1 + 2*(rand()%n);
    double t1 = now();    
    int r = cerca_binaria(v, x);
    double t2 = now();

    // escriu el temps i el resultat de la cerca
    cout << t2 - t1 << endl;
    cout << r << endl;
}
