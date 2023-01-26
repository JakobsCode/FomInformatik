#include <stdio.h>
#include <stdlib.h>
int main() {
	int a = 10;		// Res. Adr. für 1x INT		| Schreiben "10" in Adr.			| ADRESSE ALS INT INTERP.
	int* p = &a;	// Res. Adr. für 1x POINTER | Schreibe [ADRESSE VON A] in Adr.	| ADRESSE ALS POINTER INTERP.
	int** pp = &p;	// Res. Adr. für 1x POINTER | Schreibe [ADRESSE VON P] in Adr.	| ADRESSE ALS DOPPEL POINTER INTERP.

	printf("a\t= %d\n", a);
	printf("*p\t= %d\n", *p);
	printf("**pp\t= %d\n", **pp);
	printf("\n");
	printf("&a\t= %d\n", &a);
	printf("*pp\t= %d\n", *pp);
	printf("p\t= %d\n", p);
	printf("\n");
	printf("&p\t= %d\n", &p);
	printf("pp\t= %d\n", pp);
	printf("\n");
	printf("&pp\t= %d\n", &pp);
	return 0;
}