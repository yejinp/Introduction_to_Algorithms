#include "quicksort.h"
#include <time.h>
#include <stdlib.h>

void exchange(int *array, int a, int b)
{

	if(a == b) {
		return;
	}
	array[a] = array[a] ^ array[b];
	array[b] = array[a] ^ array[b];
	array[a] = array[a] ^ array[b];
}

int partition(int *array, int p, int r)
{
	int tmp = array[r];
	int i = p - 1, j = 0;
	
	for(j = p; j < r; j++)
	{
		if(array[j] <= tmp)
		{
			i++;
			exchange(array, i, j);
		}
	}
	
	exchange(array, i + 1, r);
	return i + 1;
}

void quicksort(int *array, int p, int r)
{
	int q;
	if( p < r) {
		q = partition(array, p, r);
		quicksort(array, p, q - 1);
		quicksort(array, q + 1, r);
	}
}

int partition_random(int *array, int p, int r)
{
	int tmp = array[r];
	int delta = r - p, rd;

	srandom(time(NULL));
	rd = p + random() % delta;
	exchange(array, rd, r);
	
	return partition(array, p, r);
}

void quicksort_random(int *array, int p, int r)
{
	int q;
	if( p < r) {
		q = partition_random(array, p, r);
		quicksort_random(array, p, q - 1);
		quicksort_random(array, q + 1, r);
	}
}

