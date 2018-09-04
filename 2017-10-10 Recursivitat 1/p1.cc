// Funció recursiva que retorna el factorial d'un natural.
// Prec: n>=0.

int factorial(int n) {
    if (n == 0) return 1;
    else return n * factorial(n - 1);
}