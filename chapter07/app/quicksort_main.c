#include <stdio.h>
#include "quicksort.h"

#define ARRAY_SIZE 50

int main(int argc, char ** argv) 
{
	int array[ARRAY_SIZE];

	for(int i = 0; i < ARRAY_SIZE; i++) {
		;
	}

	printf("before sorted:\n");

	for(int i = 0; i < ARRAY_SIZE; i++) {
		if(i % 16 == 0) {
			printf("\n");
		}
		printf(" %d ", array[i]);
	}

	quicksort(array, 0, ARRAY_SIZE - 1);

	printf("\nafter sorted:\n");
	for(int i = 0; i < ARRAY_SIZE; i++) {
		if(i % 16 == 0) {
			printf("\n");
		}
		printf(" %d ", array[i]);
	}
	printf("quicksort end.\n");
}
