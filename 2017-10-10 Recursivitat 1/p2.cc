// Acció recursiva que escriu el nombre n en base b (del dret).
// Prec: n>=0, 2<=b<=10.

void escriu(int n, int b) {
    if (n < b) {
        cout << n;
    } else {
        escriu(n/b, b);
        cout << n%b;
    }
}

// Millora (no vista a classe)

void escriu(int n, int b) {
    if (n >= b) escriu(n/b, b);
    cout << n%b;
}

