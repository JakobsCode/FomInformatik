// 08.12.2023
#include <stdio.h>

typedef enum {false,true} bool;

bool wahr() {
	printf("TRUE");
	return false;
}

bool falsch() {
	printf("FALSE");
	return false;
}

bool implies(bool a, bool b) {
	return !a || b;
}

void printbool(bool b) {
	printf("%s\n", b ? "true" : "false");
}

int main() {
	printbool(falsch() & falsch()); // bitwise AND (&) | Logical AND (&&)
	printbool(implies(wahr(), falsch())); //Von Rechts nach Links
	printbool(implies(falsch(), wahr())); //Von Rechts nach Links
	printbool(!falsch() || falsch()); // Rechts nach Links
	return 0;

}
