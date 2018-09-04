#include <iostream>
#include <vector>
using namespace std;


using Fila = vector<double>;
using Matriu = vector<Fila>;

int get(const Matriu& a, int i, int j) {
	  if (j > i) return a[j][i];
	  else return a[i][j];
}

void escriu(const Matriu& a) {
    int m = a.size();           // nb files
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << get(a, i, j) << " ";
        }
        cout << endl;
    }    
}

int main() {
	  int size = 5;
    Matriu m(size);
    for (int i = 0; i < size; i++) {
      	for (int j = 0; j < i + 1; j++) {
    	    	m[i].push_back(j);
    	  }
    }
    escriu(m);
}