//
// Created by jimmy on 04.04.19.
//

#ifndef OOAP1_PRIO_H
#define OOAP1_PRIO_H

#endif //OOAP1_PRIO_H

typedef struct pqentry pqentry_t;
typedef struct priorityqueue priorityqueue_t;


priorityqueue_t* pqueue_create();
void pqueue_insert(priorityqueue_t *pq, char* value, float p);
char* pqueue_extractMin(priorityqueue_t *pq);
void pqueue_decreaseKey(priorityqueue_t *pq, char* value, float p);
void pqueue_remove(priorityqueue_t *pq, char* value);
void pqueue_destroy(priorityqueue_t *pq);