#include <stdio.h>
#include "quicksort.h"

#define ARRAY_SIZE 50

void print_array(int *array, int size)
{

	int i = 0;
	for(i = 0; i < size - 1; i++)
	{
		if(i % 5 == 0) {
			printf("\n");
		}
		printf(" %10d ", array[i]);
	}
	printf("\n");

}

int main(int argc, char ** argv) 
{
	int array[ARRAY_SIZE];

	printf("before sorted:\n");

	print_array(array, ARRAY_SIZE);
	quicksort_random(array, 0, ARRAY_SIZE - 1);
//	quicksort(array, 0, ARRAY_SIZE - 1);

	printf("after sorted:\n");
	print_array(array, ARRAY_SIZE);
	printf("\nquicksort end.\n");
}
