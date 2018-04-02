#include "linear_sort.h"
#include <stdlib.h>

struct int_array *int_array_new(size_t	size)
{
	struct int_array  *pit = NULL;
	pit = (struct int_array *) malloc(sizeof(struct int_array));

	if(pit) {
		pit->data = (int *) malloc(sizeof(int) * size);
		if(pit->data) {
			memset((void *) pit->data, 0, size * sizeof(int));
			pit->size = size;
		}
	}
	
	return pit;
}

void counting_sorting(struct int_array *A, struct int_array *B, struct int_array *C)
{
	int i = 0;
	for(i = 0; i < C->size; i++) {
		C->data[i] = 0;
	}

	for(i = 0; i < A->size; i++) {
		C->data[A->data[i]] = C->data[A->data[i]] + 1;
	}

	for(i = 1; i < C->size; i++) {
		C->data[i] = C->data[i] + C->data[i - 1];
	}

	for(i = A->size - 1; i >= 0; i --) {
		B->data[C->data[A->data[i]]] = A->data[i];
		C->data[A->data[i]] = C->data[A->data[i]] - 1;
	} 

}
