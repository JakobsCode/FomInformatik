#include <stdio.h>
#include <math.h>

double ab(double d) { return d < 0 ? -d : d; }
int quadratwurzel(double yn, double x);
int quadratwurzel(double yn, double x) {
	double b = x;
	double ans;
	x = (b + (yn / b)) / 2;
	if (ab(b - x) <= 0.0000001) {
		ans = x;
	}
	else {
		ans = quadratwurzel(yn, x);
	}
	return ans;
}

int main() {
	printf("%d", quadratwurzel(81, 1));
	return 0;
}
