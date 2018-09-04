// Escriure les arrels quadrades amb 6 digíts de precisió

#include <iostream>
#include <cmath>                // usem la llibreria de funcions matemàtiques
using namespace std;

int main() {
    // aquestes dues línies "màgiques" formaten els reals amb 6 dígits:
    cout.setf(ios::fixed);
    cout.precision(6);
    
    double x;
    while (cin >> x) {
        cout << sqrt(x) << endl;
    }
}
