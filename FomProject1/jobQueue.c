#include <stdio.h>
#include <stdlib.h>
#include "jobQueue.h"

int pushJQ(JobQueue_t* pJQ, Job_t* pJob) {
	return 0;
}
Job_t popJQ(JobQueue_t* pJQ) {
	Job_t job_leer = { 0 };
	return job_leer;
}
void printJQ(JobQueue_t* pJQ) {
	if (pJQ->first == NULL) {
		printf("Leere Queue Ö\n");
	} 
	else {
		QueueEl_t* pEl = pJQ->first;
		for (;pEl != NULL; pEl = pEl->next){
			printf("%4d\t%s", pEl->Job.prio, pEl->Job.desc);
		}
	}
}