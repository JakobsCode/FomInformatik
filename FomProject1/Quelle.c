// 12.01.2023
//https://github.com/JakobsCode/FomInformatik
#include <stdio.h>
#define MAX_N 10

int NUM;
int a[MAX_N];
int b[MAX_N];

void Einlesen() {
	printf("Wie viele Zahlen willst du einlesen? (Max: %d)\n", MAX_N);
	scanf_s("%d", &NUM);
	for (int i = 0; i < NUM; i++) {
		printf("Bitte die Zahl fuer a[%d] eingeben\n", i);
		scanf_s("%d", &a[i]);
		printf("Bitte die Zahl fuer b[%d] eingeben\n", i);
		scanf_s("%d", &b[i]);
	}
	printf("Alle Zahlen wurden eingelesen.\n");
}

int Skalarprodukt() {
	int Returnvalue = 0;
	for (int j = 0; j < NUM; j++) {
		Returnvalue += a[j] * b[j];
	}
		return Returnvalue;
}

void main()
{
	Einlesen();
	printf("Das Skalaprodukt ist %d\n", Skalarprodukt());
}