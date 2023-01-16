#include <stdio.h>
#include <stdlib.h>
#include "jobQueue.h"

int pushJQ(JobQueue_t* pJQ, Job_t* pJob) {
	QueueEl_t QueueEl;
	QueueEl.Job = *pJob;
	QueueEl.next = NULL;
	if (pJQ->count == NULL || pJQ->count == 0){ // Kein Element in der Queue
		pJQ->first = &QueueEl;
		pJQ->last = &QueueEl;
		pJQ->count = 1;
		printf("Erstes Element!\n");
		return 1;
	}
	else // Mehrere Elemente in der Queue
	{
		int count_zähler = 0;
		QueueEl_t* pQueueEl = pJQ->first;
		for (; pQueueEl != NULL; pQueueEl = pQueueEl->next) {
			if ((pQueueEl->Job.prio) > (pJob->prio)) {
				QueueEl.next = &pQueueEl;
				pQueueEl = pJQ->first;
				for (int i = 0; i < count_zähler; i++)
				{
					if (i == count_zähler) {
						pQueueEl->next = &QueueEl;
						pJQ->count = pJQ->count + 1;
						return 1;
					}
					pQueueEl = pQueueEl->next;
				}
			}
			else
			{
				count_zähler++;
			}
		}

		pQueueEl = pJQ->first;
		for (int i = 1; i < pJQ->count; i++) {
			pQueueEl = pQueueEl->next;
		}
		pQueueEl->next = &QueueEl;
	}

	return 0;
}

Job_t popJQ(JobQueue_t* pJQ) {
	Job_t job_leer = { 0 };
	return job_leer;
}

void printJQ(JobQueue_t* pJQ) { // FERTIG
	if (pJQ->first == NULL) {
		printf("Leere Queue (Ö)\n");
	} 
	else {
		QueueEl_t* pEl = pJQ->first;
		printf("-- Queue Start --\n");

		for (;pEl != NULL; pEl = pEl->next){
			printf("Prio: %4d\t Desc: %s\n", pEl->Job.prio, pEl->Job.desc);
		}
		printf("-- Queue Stop  --\n");
	}
}