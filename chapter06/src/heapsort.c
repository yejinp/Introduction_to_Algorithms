#include "heapsort.h"

static void int_exchange(int *A, int a, int b)
{
	int t = A[a];
	A[a] = A[b];
	A[b] = t;
}


void	max_heapify(int *A, int i, int size)
{
	int l, r, largest = i;
	l = LEFT(i);
	r = RIGHT(i);

	if(l < size && A[l] > A[largest])
		largest = l;
	if(r < size && A[r] > A[largest])
		largest = r;

	if (largest != i) {
		int_exchange(A, i, largest);
		max_heapify(A, largest, size);
	}
}

void	build_max_heap(int *A, int size)
{
	int	i = 0;
	for(i = size / 2 - 1; i >= 0; i-- ) {
		max_heapify(A, i, size);
	}

}

void	max_heap_sort(int *array, int size)
{
	int i;
	build_max_heap(array, size);
	for(i = size - 1; i > 0; i--) {
		int_exchange(array, i, 0);
		max_heapify(array, 0, i);
	}

}

void	min_heapify(int *A, int i, int size)
{
	int l, r, smallest = i;
	l = LEFT(i);
	r = RIGHT(i);

	if(l < size && A[l] < A[smallest])
		smallest = l;
	if(r < size && A[r] < A[smallest])
		smallest = r;

	if (smallest != i) {
		int_exchange(A, i, smallest);

		min_heapify(A, smallest, size);
	}
	

}

void	build_min_heap(int *A, int size)
{
	int	i = 0;
	for(i = size / 2 - 1; i >= 0; i-- ) {
		min_heapify(A, i, size);
	}

}


void	min_heap_sort(int *array, int size)
{
	int i;
	build_min_heap(array, size);
	for(i = size - 1; i > 0; i--) {
		int_exchange(array, i, 0);
		min_heapify(array, 0, i);
	}

}
