#include <stdio.h>
#include <stdlib.h>
#include "heapsort.h"


void print_int_array(int *a, int size)
{
	int i = 0;
	for(i = 0; i < size; i++) {
		if(i % 5 == 0)
			printf("\n");
		printf(" %10d ", a[i]);
		
	}
	printf("\n");
}

#define SIZE	20
int main(int argc, char *argv[])
{


	int array[SIZE];
	print_int_array(array, SIZE);
	max_heap_sort(array, SIZE);
	print_int_array(array, SIZE);
}
