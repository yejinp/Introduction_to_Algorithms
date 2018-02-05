#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "queue.h"

struct queue *queue_create(unsigned long size)
{
    if (0 == size) {
        return NULL;
    }

    struct queue *q = NULL;
    q = (struct queue *) malloc(sizeof(struct queue)); 

    if(NULL == q) {
        return NULL;
    }

    bzero(q, sizeof(struct queue));

    q->data = (void **)malloc(size * sizeof(void*));

    if(NULL == q->data) {
        free(q);
        return NULL;
    }

    bzero(q->data, size * sizeof(void*));

    q->size = size;
    q->tail = 0;
    q->head = 0;

    return q;
}

void queuq_free(struct queue *q)
{
    if(q == NULL) {
        return ;
    }
    free(q->data);
    free(q);
}

int queue_is_full(struct queue *q)
{
    if(NULL == q) {
        return QUEUE_FULL;
    }

    if(q->head == q->size - 1 && q->tail == 0) {
        return QUEUE_FULL;
    } 

    if(q->head == q->tail - 1) {
        return QUEUE_FULL;
    }

    return QUEUE_NOT_FULL;
}

int queue_is_empty(struct queue *q)
{
    if(NULL == q) {
        return QUEUE_EMPTY;
    }

    return q->head == q->tail;
}

int enqueue(struct queue *q, void *data)
{
    if(NULL == q || QUEUE_FULL == queue_is_full(q)) {
        return QUEUE_ENQUEUE_FAIL;
    }
    
    q->data[q->tail] = data;

    if(q->tail == q->size) {
        q->tail = 0;
    } else {
        q->tail = q->tail + 1;
    }
    return QUEUE_ENQUEUE_OK;
}

void *dequeue(struct queue *q)
{
    
    void *ret = NULL;
    if(NULL == q || QUEUE_EMPTY == queue_is_empty(q)) {
        return NULL;
    }

    ret = q->data[q->head];
    q->data[q->head] = NULL;

    if(q->head == q->size) {
        q->head = 0;
    } else {
        q->head = q->head + 1;
    }

    return ret;
}

