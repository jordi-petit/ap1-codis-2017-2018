// Intercanvi amb una acció

#include <iostream>
using namespace std;


void swap(int& a, int& b) {
    int c = a;
    a = b;
    b = c;
}


int main() {
    int x = 2;
    int y = 3;
    swap(x, y);
    cout << x << " " << y << endl;
}
