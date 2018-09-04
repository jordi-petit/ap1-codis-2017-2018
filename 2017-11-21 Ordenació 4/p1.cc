#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cassert>
using namespace std;


double now() {
    return clock() / double(CLOCKS_PER_SEC);
}



int main() {
    srand(time(0));
    int n;
    cin >> n;
    vector<double> v(n);
    for (int i = 0; i < n; ++i) {
        v[i] = rand() / double(RAND_MAX);
    }

    double t1 = now();    
    sort(v.begin(), v.end());
    double t2 = now();

    cout << t2 - t1 << endl;

    for (int i = 0; i < n-1; ++i) {
        assert(v[i] <= v[i+1]);
    }
}
