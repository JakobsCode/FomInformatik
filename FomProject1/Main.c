#include <stdio.h>
#include "jobQueue.h"

int main() {
	printf("ben");
	JobQueue_t jobQueue_1 = { 0 };
	Job_t	Job_1 = { 1, "Job_1" },
		Job_2 = { 2, "Job_2" },
		Job_3 = { 3, "Job_3" },
		Job_4 = { 4, "Job_4" };

	printf("------------\n");
	pushJQ(&jobQueue_1, &Job_1);
	printJQ(&jobQueue_1);
	printf("------------\n");
	pushJQ(&jobQueue_1, &Job_2);
	printJQ(&jobQueue_1);
	printf("------------\n");
	pushJQ(&jobQueue_1, &Job_3);
	printJQ(&jobQueue_1);
	printf("------------\n");
	pushJQ(&jobQueue_1, &Job_4);
	printJQ(&jobQueue_1);
	printf("------------\n");
	/*
	JobQueue_t jobQueue_1, jobQueue_2 = { 0 };
	Job_t	Job_1 = {50, "Urlaubsplanung"},
			Job_2 = {5, "Zähne putzen"},
			Job_3 = {15, "Früh aufstehen"},
			Job_4 = {34, "E-Mails beantworten"},
			Job_5 = { 0 };
	

	pushJQ(&jobQueue_1, &Job_1);
	pushJQ(&jobQueue_1, &Job_2);
	pushJQ(&jobQueue_1, &Job_3);

	printJQ(&jobQueue_1);

	pushJQ(&jobQueue_2, &Job_4);
	pushJQ(&jobQueue_2, &Job_3);

	Job_5 = popJQ(&jobQueue_1);

	printJQ(&jobQueue_1);
	printJQ(&jobQueue_2);

	printf("%d",jobQueue_1.count);
	*/
	return 0;
}
