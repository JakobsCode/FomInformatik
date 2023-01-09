#include <stdio.h>
#include <stdlib.h>
#include "jobQueue.h"

int pushJQ(JobQueue_t* pJQ, Job_t* pJob) {
	QueueEl_t *pQueueEl;
	if (pJQ->count == NULL || pJQ->count == 0){ // Kein Element in der Queue
		pQueueEl->Job = *pJob;
		pQueueEl.next = NULL;
		pJQ->first = pQueueEl;
		pJQ->last = pQueueEl;
		pJQ->count = 1;
	}
	else // Mehrere Elemente in der Queue
	{
		pQueueEl = pJQ->first;
		QueueEl_t *pNewQueueEl;
		int zähler = 0;
		for (; pQueueEl != NULL; pQueueEl = pQueueEl->next) {
			if ((pQueueEl->Job.prio) > (pJob->prio)) {
				pNewQueueEl->Job = *pJob;
				pNewQueueEl->next = &pQueueEl;
				// Aktuelles pQueueEl ist das QeueElement NACH UNSEREM JOB!
				//pQueueEl->Job = pJob; // Bullshit, wir wollen den Job nicht !!überschreiben
				//pQueueEl->next = &pJob; // & ELEMENT, nicht JOB

				pQueueEl = pJQ->first;
				for (int i = 0 ; i <= zähler; i++)
				{
					if (i == zähler) {
						pQueueEl->next = &pNewQueueEl
						break;
					}
					pQueueEl = pQueueEl->next;
				}
				break;
			}
			else
			{
				zähler++;
			}
		}

		pJQ->count = pJQ->count + 1;
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
		for (;pEl != NULL; pEl = pEl->next){
			//printf("%4d\t%s", pEl->Job.prio, pEl->Job.desc);
			printf("%4d%s", pEl->Job.prio, pEl->Job.desc);
		}
	}
}