// Indica si el nombre de dígits és a la representació decimal de x.
// Precondició: x >= 0.
// => Cerca

bool hi_ha_nombre3(int x) {
    bool trobat = true;
    while (not trobat and x > 0) {
        if (x%10 == 3) trobat = true;
        else x = x / 10;
    }
    return trobat;
}


// Aquí, millor sense el boolèa!:

bool hi_ha_nombre3(int x) {
    while (x > 0) {
        if (x%10 == 3) return true;
        x = x / 10;
    }
    return false;
}