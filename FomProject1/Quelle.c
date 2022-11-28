// 28.11.2022
//https://github.com/JakobsCode/FomInformatik
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "H1.h"

void main()
{
	int zahlgeraten = 0;			/*Zahl der ratenen Person*/
	time_t sec;						/*Aktuelle Zeit in Sekunden*/
	int zufall = 0;					/*Zufallszahl initialisieren*/
	int spielen = 1;				/*Entscheidet, ob erneut gespielt werden soll*/
	while (spielen) {				/*Solange spielen == 1*/ //-->Optimal: Do-While
		sec = time(NULL);			/*Aktuelle Zeit abrufen*/
		srand(sec);					/*Zufallsgenerator seeden (Anti-NSA)*/
		zufall = rand() % 15 + 1;	/*Zufällige Zahl wird generiet*/
		printf("Zufallszahl wurde erstellt. Rate deine Zahl!\n");
		for (int i = 0; i < 3; i++) {
			printf("Deine Zahl: ");
			scanf_s("%d", &zahlgeraten);
			if (zahlgeraten == zufall) { //-->Optimal: Erst ungleich, wegen Wahrscheinlichkeiten
				printf("Richtige Zahl! Dies war dein %d|3 Versuch\n", i + 1);
				break;
			}
			else {
				printf("Leider falsch, dass war dein %d|3 Versuch\n", i + 1);
				if (zahlgeraten > zufall) {
					printf("Die Zahl ist kleiner.\n");
				}
				else {
					printf("Die Zahl ist groesser.\n");
				}
			}
		}
		printf("Die Zahl war: %d\n", zufall);
		printf("Willst du nochmal spielen? NEIN=0, JA=1\n");
		printf("Deine Eingabe: ");
		scanf_s("%d", &spielen);
	}
}