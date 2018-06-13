#ifndef	_H_MEDIANS_ORDER_
#define	_H_MEDIANS_ORDER_

int max(int *array, size_t size);
int min(int *array, size_t size);
int *max_and_min(int *array, size_t size, int *ret);
int randomized_select( int *array, int p, int r, int i);

#endif
