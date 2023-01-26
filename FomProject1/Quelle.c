#include <stdio.h>
#include <stdlib.h>
int main() {
	int a = 10;		// Res. Adr. für 1x INT		| Schreiben "10" in Adr.			| ADRESSE ALS INT INTERP.
	int p = &a;	// Res. Adr. für 1x POINTER | Schreibe [ADRESSE VON A] in Adr.	| ADRESSE ALS POINTER INTERP.
	int** pp = &p;	// Res. Adr. für 1x POINTER | Schreibe [ADRESSE VON P] in Adr.	| ADRESSE ALS DOPPEL POINTER INTERP.

	printf("a\t= %d\n", a);
	printf("*p\t= %d\n", *(int*)p);
	printf("**pp\t= %d\n", **pp);
	printf("\n");
	printf("&a\t= %p\n", &a);
	printf("*pp\t= %p\n", *pp);
	printf("p\t= %p\n", (int*)p);
	printf("\n");
	printf("&p\t= %p\n", &(int*)p);
	printf("pp\t= %p\n", pp);
	printf("\n");
	printf("&pp\t= %p\n", &pp);
	return 0;
}


/*
Console Out:
a       = 10
*p      = 10
**pp    = 10

&a      = 0097FCA4
*pp     = 0097FCA4
p       = 0097FCA4

&p      = 0097FC98
pp      = 0097FC98

&pp     = 0097FC8C

*/