#include <stdio.h>
#include "jobQueue.h"

int main() {
	JobQueue_t jobQueue_1 = {0}, jobQueue_2 = {0};
	Job_t	Job_1 = { 50, "Urlaubsplanung" },
		Job_2 = { 5, "Zähne putzen" },
		Job_3 = { 15, "Früh aufstehen" },
		Job_4 = { 34, "E-Mails beantworten" },
		Job_5 = { 10, "Super Klaus" },
		Job_6 = { 9, "Agile Working" },
		Job_7 = { 99, "FOM Technik"};
	

	pushJQ(&jobQueue_1, &Job_1);
	pushJQ(&jobQueue_1, &Job_2);
	pushJQ(&jobQueue_1, &Job_3);
	pushJQ(&jobQueue_1, &Job_4);
	pushJQ(&jobQueue_1, &Job_5);
	pushJQ(&jobQueue_1, &Job_6);
	pushJQ(&jobQueue_1, &Job_7);

	printJQ(&jobQueue_1);
	printf("Ende Queue 1\n");
	pushJQ(&jobQueue_2, &Job_4);
	pushJQ(&jobQueue_2, &Job_3);

	Job_5 = popJQ(&jobQueue_1);

	printJQ(&jobQueue_1);
	printf("Ende Queue 1\n");
	printJQ(&jobQueue_2);
	printf("Ende Queue 2\n");

	printf("Job Queue 1 Count: %d\n",jobQueue_1.count);

	return 0;
}
