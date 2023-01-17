#include <stdio.h>
#include <stdlib.h>
#include "jobQueue.h"

int pushJQ(JobQueue_t* pJQ, Job_t* pJob) {
	QueueEl_t* pNewEl = calloc(1, sizeof(QueueEl_t)); //=> pNewEl->next = NULL
	if (pNewEl == NULL) return 0;

	pNewEl->Job = *pJob;
	if (++pJQ->count == 1) pJQ->first = pJQ->last = pNewEl;
	else {
		QueueEl_t* pEl = pJQ->first, * pPrevEl = NULL;
		for (; pPrevEl != pJQ->last && pEl->Job.prio > pNewEl->Job.prio; pEl = pEl->next) pPrevEl = pEl;
		if (pPrevEl == NULL) {
			pNewEl->next = pJQ->first;
			pJQ->first = pNewEl;
		}
		else
		{
			pNewEl->next = pPrevEl->next;
			pPrevEl->next = pNewEl;
			if (pPrevEl == pJQ->last) pJQ->last = pNewEl;
		}

	}
	return 1;
}

Job_t popJQ(JobQueue_t* pJQ) {
	Job_t job_temp = { 0 };
	if (pJQ->first == NULL) printf("Queue ist leer\n");
	else
	{
		QueueEl_t* QueueEl = pJQ->first;

		job_temp = QueueEl->Job;

		if (--pJQ->count == 0) pJQ->first = pJQ->last = NULL;
		else pJQ->first = pJQ->first->next;

		free(QueueEl);
	}
	return job_temp;
}

void printJQ(JobQueue_t* pJQ) { // FERTIG
	if (pJQ->first == NULL) {
		printf("Leere Queue (Ö)\n");
	}
	else {
		QueueEl_t* pEl = pJQ->first;
		for (; pEl != NULL; pEl = pEl->next) {
			printf("%4d  %s\n", pEl->Job.prio, pEl->Job.desc);
		}
	}
}