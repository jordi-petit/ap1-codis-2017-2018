/* Intercanvi de dues variables */

// 1er intent: no funciona !!!
int a = ...;
int b = ...;
a = b;            
b = a;
cout << a << " " << b << endl;

// 2n intent: ara sí!
int a = ...;
int b = ...;
int c = a;             // variable temporal
a = b;
b = c;
cout << a << " " << b << endl;
