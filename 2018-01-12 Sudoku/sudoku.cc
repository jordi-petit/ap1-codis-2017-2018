/**
    Aquesta és la implementació que vam fer a classe per solucionar
    un Sudoku. Al codi li falten els comentaris, però són els vaig anar dient
    a classe mentre el feiem.
**/


#include <iostream>
#include <vector>
#include <set>

using namespace std;


using Sudoku = vector<vector<set<int>>>;


Sudoku read() {
    Sudoku s(9, vector<set<int>>(9));
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            char c;
            cin >> c;
            if (c == '.') s[i][j] = {0,1,2,3,4,5,6,7,8};
            else s[i][j] = {c - '0' - 1};
        }
    }
    return s;
}


void print(const Sudoku& s) {
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            for (int k : s[i][j]) {     // una iteració!
                cout << k + 1 << ' ';
            }
        }
        cout << endl;
    }
}



void debug(const Sudoku& s) {
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            cout << "[";
            for (int k = 0; k < 9; ++k) {
                if (s[i][j].count(k)) cout << k+1;
                else cout << " ";
            }
            cout << "]   ";
            if (j%3 == 2) cout << "    ";
        }
        cout << endl;
        if (i%3 == 2) cout << endl;
    }
}


int candidates(const Sudoku& s) {
    int c = 0;
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            c += s[i][j].size();
    }   }
    return c;
}


bool failed(const Sudoku& s) {
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            if (s[i][j].size() == 0) return true;
    }   }
    return false;
}


bool solved(const Sudoku& s) {
    return candidates(s) == 9*9;
}


void erase(Sudoku& s, int x, int wi, int wj, int i, int j) {
    if (wi != i or wj != j) {
        s[wi][wj].erase(x);
    }
}


void propagate_from_cell(Sudoku& s, int i, int j) {
    for (int x: s[i][j]) {          // una iteració!
        // treure de la fila
        for (int j1 = 0; j1 < 9; ++j1) {
            erase(s, x, i, j1, i, j);
        }
        // treure de la columna
        for (int i1 = 0; i1 < 9; ++i1) {
            erase(s, x, i1, j, i, j);
        }
        // treure de la caixa
        int i2 = (i/3)*3;
        int j2 = (j/3)*3;
        for (int i3 : {0, 1, 2}) {
            for (int j3 : {0, 1, 2}) {
                int i4 = i2 + i3;
                int j4 = j2 + j3;
                erase(s, x, i4, j4, i, j);
}   }   }   }


void propagate_from_all_cells(Sudoku& s) {
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            if (s[i][j].size() == 1) {
                propagate_from_cell(s, i, j);
}   }   }   }


void propagate_everything(Sudoku& s) {
    int c = candidates(s);
    propagate_from_all_cells(s);
    if (candidates(s) < c) propagate_everything(s);
}


void choose_guess_cell(const Sudoku& s, int& i, int& j) {
    int m = 10;
    for (int i1 = 0; i1 < 9; ++i1) {
        for (int j1 = 0; j1 < 9; ++j1) {
            int sz = s[i1][j1].size();
            if (sz < m and sz > 1) {
                m = sz;
                i = i1;
                j = j1;
}   }   }   }


void solve(Sudoku& s) {
    propagate_everything(s);
    if (not solved(s) and not failed(s)) {
        int i, j;
        choose_guess_cell(s, i, j);
        for (int k : s[i][j]) {
            Sudoku s2 = s;
            s2[i][j] = {k};
            solve(s2);
            if (solved(s2) and not failed(s2)) {
                s = s2;
                return;
            }
        }
    }
}


int main() {
    Sudoku s = read();
    solve(s);
    print(s);
}
