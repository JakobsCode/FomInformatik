#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include "H1.h"
#include <time.h>

unsigned int ggT(unsigned int a, unsigned int b) {
	if (b == 0) return a;
	return ggT(b, a % b);
}


int main() {
	printf("%d",ggT(123456, 131312));
	return 0;
}