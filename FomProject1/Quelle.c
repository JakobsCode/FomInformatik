#include <stdio.h>
#include <math.h>

void heron(double x, double* result) {
    // Anfangswert f�r die Iteration festlegen
    double last = x;
    double next = (last + x / last) / 2.0;

    // Iteration solange fortsetzen, bis sich der Wert kaum noch ver�ndert
    while (fabs(last - next) > 1e-9) {
        last = next;
        next = (last + x / last) / 2.0;
    }

    // Ergebnis zur�ckgeben
    *result = next;
}

int main(void) {
    double x = 9.0;
    double result;
    heron(x, &result);
    printf("Die Quadratwurzel von %f ist %f\n", x, result);
    return 0;
}
