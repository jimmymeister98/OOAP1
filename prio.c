//
// Created by jimmy on 04.04.19.
//

#include "prio.h"
#include <stdlib.h>
#include <time.h>

//*****************************************************************************

struct pqentry{
    float prio;
    pqentry_t* next;
    pqentry_t* prev;

};

struct priorityqueue{
    int entries;
    double time;
    pqentry_t* head;
    pqentry_t* tail;
};
//*****************************************************************************


//queue erstellen
priorityqueue_t* pqueue_create(){
//------------------------------------  Initialiserung von der Queue
priorityqueue_t *pq;
pq = (priorityqueue_t *)malloc(sizeof(priorityqueue_t));
pq->time = 0.0;
pq->head = NULL;
pq->tail = NULL;
//------------------------------------
}///Jetzt gibts eine Leere queue

//******************************************************************************
//Elemente einfügen
void pqueue_insert(priorityqueue_t* pq, char* value, float p) {

	//initialisieren der elemente
	pqentry_t *pqe, *pos;
	pqe = (pqentry_t*)malloc(sizeof(pqentry_t));
	pqe->prio = 0.0;
	pqe->next = NULL;
	pqe->prev = NULL;
	// Fall nr. "0" => Queue leer, element am anfang einfügen
	if (pq->head == NULL) {
		pq->head = pqe;
		pq->tail = pqe; }

	///insertion-sort
	pos = pq->head;
	while (pos != NULL && pqe->prio > pos->prio)
		pos = pos->next;

	//Fall nr. 1 => Am anfang einfügen
	if (pos == pq->head) {
		pqe->next = pos;
		pos->prev = pqe;
		pq->head = pqe;

	}

}

