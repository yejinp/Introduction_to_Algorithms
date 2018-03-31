#ifndef		_HEAP_SORT_H__
#define		_HEAP_SORT_H__

#define	PARENT(i)	(i>>1)
#define	LEFT(i)		((i<<1) + 1)
#define	RIGHT(i)	((i<<1) + 2)

void	max_heapify(int *array, int i, int size);
void	build_max_heap(int	*array, int size);
void	max_heap_sort(int *array, int size);

void	min_heapify(int *array, int i, int size);
void	build_min_heap(int	*array, int size);
void	min_heap_sort(int *array, int i, int size);
#endif
