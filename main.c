#include <stdio.h>

int main () {
    int x; float a, b, s, su, m, d;

    printf ("soma (1), subtração (2), multiplicação (3) ou divisão (4) deseja realizar? ");
    scanf ("%d", &x);

    printf ("OBS: as operações serão feitas cm 2 dígitos depois da vírgula!\n");

    printf ("1st number: "); scanf ("%f", &a);
    printf ("2nd number: "); scanf ("%f", &b);

    switch (x) {
        case 1: {
            s = a + b;
            printf ("soma: %.2f", s); break;
        }
        case 2: {
            su = a + b;
            printf ("subtração: %.2f", su); break;
        }
        case 3: {
            m = a * b;
            printf ("multiplicação: %.2f", m); break;
        }
        case 4: {
            d = a / b;
            printf ("divisão: %.2f", d); break;
        }
        default: printf ("erro");
    }

return 0; }
