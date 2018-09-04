#include <iostream>
#include <vector>
using namespace std;

using Fila = vector<double>;
using Matriu = vector<Fila>;


void escriu(const Matriu& a) {
    int m = a.size();           // nb files
    int n = a[0].size();        // nb columnes
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }    
}

void search(const Matriu& a, int& i, int& j, double x) {
    int m = a.size();           // nb files
    int n = a[0].size();        // nb columnes
    for (int i2 = 0; i2 < m; ++i2) {
        for (int j2 = 0; j2 < n; ++j2) {
            if (a[i2][j2] == x) {
            	i = i2;
            	j = j2;
            	return;
            }
        }

    }  
    i = -1;
    j = -1;
}

int dicotomica(const Fila& f, int l, int r, double x) {
	if (l > r) return -1;
	int m = (l+r)/2;
	if (f[m] == x) return m;
	else if (f[m] > x) return dicotomica(f, 0, m-1, x);
	else return dicotomica(f, m+1, r, x);
}

// rows are ordered
void search2(const Matriu& a, int& i, int& j, double x) {
	int m = a.size();
	for (int i2 = 0; i2 < m; i2++) { // pe files
		int ret_dico = dicotomica(a[i2], 0, a[i2].size() - 1, x);
		if (ret_dico != -1) {
			i = i;
			j = ret_dico;
			return;
		}
	}
	i = -1;
	j = -1;
}

// rows and columns are ordered
void search3(const Matriu& a, int& i, int& j, double x) {
	int m = a.size();
	int n = a[0].size();
	i = m - 1;
	j = 0;
	while (i >= 0 and j < n) {
		if (a[i][j] == x) return;
		else if (a[i][j] > x) i--;
		else j++;
	}
	i = -1;
	j = -1;
}

int main() {
    Matriu m = {
        {1, 4, 5, 7, 10, 12},
        {2, 5, 8, 9, 10, 13},
        {6, 7, 10, 11, 12, 15},
        {9, 11, 13, 14, 17, 20},
        {11, 12, 19, 20, 21, 23},
        {13, 14, 20, 22, 25, 26}
    };
    int i, j;
    double cerca = 14;
    busca3(m, i, j, cerca);
    cout << "Cerca: " << cerca << " " << i << " " << j << endl;
}