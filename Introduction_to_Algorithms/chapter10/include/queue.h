/*
 *
 *
 *
 */

#ifndef __QUEUE_H__
#define __QUEUE_H__

#define QUEUE_FULL		1
#define QUEUE_NOT_FULL		0

#define QUEUE_EMPTY  		1
#define QUEUE_NOT_EMPTY		0

#define QUEUE_ENQUEUE_OK	1
#define QUEUE_ENQUEUE_FAIL	0


struct queue {
  unsigned long tail;
  unsigned long head;
  unsigned long size;
  void **data;
};

struct queue *queue_create();    
void queue_free(struct queue *q);

int queue_is_full(struct queue *q);

int queue_is_empty(struct queue *q);

int enqueue(struct queue *q, void *data);

void *dequeue(struct queue *q);

#endif
