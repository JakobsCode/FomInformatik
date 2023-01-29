#include <stdio.h>
#include <stdlib.h>

double ab(double d) {
	return d < 0 ? -d : d;
}

double quadratwurzel(double yn, double x) {
	if (ab(yn * yn - x) > 0.0000001) {
		yn = (yn * yn + x) / (2 * yn);
		return quadratwurzel(yn, x);
	}
	else
	{
		return yn;
	}
}


int main() {
	printf("Ergebnis: %f\n", quadratwurzel(1, 9));
	return 0;
}