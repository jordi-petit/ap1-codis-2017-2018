#include <iostream>
#include <algorithm>
using namespace std;


void ordernacio_per_insercio(vector<double>& v) {
    int n = v.size();
    for (int i = 1; i < n; ++i) {
        for (int j = i; j > 0 and v[j - 1] > v[j]; --j) {
            swap(v[j - 1], v[j]);
        }
    }  
}