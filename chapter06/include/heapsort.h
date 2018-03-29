#ifndef		_HEAP_SORT_H__
#define		_HEAP_SORT_H__

PARENT(i)	(i>>1)
LEFT(i)		((i<<1) + 1)
RIGHT(i)	((i<<1) + 2)

void	max_heapify(int *array, int i, int size);
void	build_max_heap(int	*array, int size);

#endif
