// 28.11.2022
//https://github.com/JakobsCode/FomInformatik
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "H1.h"
//vabs
void main()
{
	int keep_running = 1; // =true
	int User_Data = 0; //Eingabe
	int Zahl1 = 9;
	int Zahl2 = 1;
	float xn = 1;
	float xn1 = 1;

	do
	{
		printf("----------------------------------------------------------------------------\n");
		printf("----------------------------------------------------------------------------\n");
		printf("1 = Eingabe Zahl1\n");
		printf("2 = Eingabe Zahl2\n");
		printf("3 = Ausgabe Summe\n");
		printf("4 = Ausgabe Produkt\n");
		printf("5 = Ausgabe Subtraktion\n");
		printf("6 = Ausgabe Division\n");
		printf("7 = Ausgabe aller möglichen Multiplikationen von (1...Zahl1)*(1...Zahl2)\n");
		printf("8 = Quatratwurtel für Zahl1 nach Heron-Verfahren\n");
		printf("9 = Beenden\n");
		printf("----------------------------------------------------------------------------\n");
		printf("----------------------------------------------------------------------------\n");
		printf("\n");
		printf("\n");
		printf("\n");


		printf("Deine Eingabe: ");
		scanf_s("%d", &User_Data);
		printf("\n");

		switch(User_Data) {
		case 1:
			printf("Deine Eingabe für Zahl 1: ");
			scanf_s("%d", &Zahl1);
			printf("\n");
			break;
		case 2:
			printf("Deine Eingabe für Zahl 2: ");
			scanf_s("%d", &Zahl2);
			printf("\n");
			break;
		case 3:
			printf("Die Summe ist: %d", Zahl1 + Zahl1);
			break;
		case 4:
			printf("Das Produkt ist: %d", Zahl1 * Zahl2);
			break;
		case 5:
			printf("Die Differenz ist %d", Zahl1 - Zahl2);
			break;
		case 6:
			if (Zahl2 != 0) {
				printf("DIe Division ist %f", Zahl1 / Zahl2);
			}
			else
			{
				printf("Die Zahl 2 ist 0. Division nicht möglich!");
			}
			break;
		case 7:
			for (int i = 1; i < Zahl1; i++) {
				for (int k = 1; k < Zahl2; k++) {
					if (i * k < 10) {
						printf("%d  ", i * k);
					}
					else
					{
						printf("%d ", i * k);
					}
				}
				printf("\n");
			}
			break;
		case 8:
			xn1 = 1;
			do
			{
				xn = xn1;
				xn1 = (xn + Zahl1 / xn) / 2;
			} while (fabs(xn1 - xn)>0.001);
			printf("Die Wurzel ist: %f\n", xn1);
			break;
		case 9:
			printf("Bis zum naechsten mal!");
			keep_running = 0;
			break;
		default:
			printf("Lesen muss gekoennt sein....");
			break;
		}


	} while (keep_running);
}