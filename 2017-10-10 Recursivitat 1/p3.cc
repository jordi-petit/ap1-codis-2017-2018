// Funció recursiva que calcula el màxim comú divisor de dos naturals

int mcd(int a, int b) {
    if (a == 0) return b;
    return mcd(b%a, a);
}

// O també:

int mcd(int a, int b) {
    return a == 0 ? b : mcd(b%a, a);
}

