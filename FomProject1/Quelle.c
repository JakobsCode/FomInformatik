#include <stdio.h>
#include "jobQueue.h"

int main() {
	JobQueue_t jobQueue_1, jobQueue_2 = { 0 };
	Job_t	Job_1 = {50, "Urlaubsplanung"},
			Job_2 = {5, "Z�hne putzen"},
			Job_3 = {15, "Fr�h aufstehen"},
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

	return 0;
}
