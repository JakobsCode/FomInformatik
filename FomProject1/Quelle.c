// 12.01.2023
//https://github.com/JakobsCode/FomInformatik
#include <stdio.h>

void main()
{
	int a = 5;
	printf("a: %d\n", a);
	int b = a++;
	printf("b: %d\n", b);
	printf("-> a: %d\n", a);
	int c = ++a;
	printf("c: %d\n", c);
	printf("--->a: %d\n", a);
}