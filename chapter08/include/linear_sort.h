#ifndef	_LINEAR_SORG_H_
#define _LINEAR_SORG_H_

#include <limits.h>
#include <stdlib.h>
#include <string.h>

struct int_array {
	size_t	size;
	int *data;
};

struct int_array *int_array_new(size_t	size);
void counting_sorting(struct int_array *A, struct int_array *B, struct int_array *C);


#endif
