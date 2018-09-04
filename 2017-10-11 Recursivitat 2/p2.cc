// Torres de Hanoi


#include <iostream>
using namespace std;


// Mou n discos de ori a dst passant per aux.
void hanoi(int n, char ori, char dst, char aux) {
    if (n != 0) {
        hanoi(n - 1, ori, aux, dst);
        cout << "moure de " << ori << " a " << dst << endl;
        hanoi(n - 1, aux, dst, ori);
    }
}


int main() {
    int n;
    cin >> n;
    hanoi(n, 'A', 'C', 'B');
}
