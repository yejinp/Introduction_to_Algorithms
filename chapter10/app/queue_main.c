#include <stdlib.h>
#include <stdio.h>

#include "queue.h"
#include "data.h"

int main(int argc, char **argv)
{
	struct queue *q = queue_create(1024);
	struct data *d = (struct data *)malloc(sizeof(struct data));
	if(d == NULL) {
		printf("malloc error!\n");
		exit(4);
	}
	d->key = 5;

	enqueue(q, d);		
	d = (struct data *)dequeue(q);
	if(d == NULL) 
	{
		printf("dequeue error.\n");
		exit(6);
	}
	printf("data is: %d\n", d->key);

	d = (struct data *)dequeue(q);
	if(d == NULL) 
	{
		printf("dequeue error.\n");
		exit(6);
	}
	
	printf("data is: %d\n", d->key);

}
