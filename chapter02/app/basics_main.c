
#include "basics.h"
#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 50

void print_array(int *array, int b, int e)
{
	int i = 0;
	for(i = b; i < e; i++)
	{
		if((i - b)% 5 == 0) {
			printf("\n");
		}
		printf("%10d ", array[i]);
	}
	printf("\n");
}

int main(int argc, char **argv)
{

	int array[ARRAY_SIZE];
	print_array(array, 0 , ARRAY_SIZE - 1);

	//insert_sort(array, 0, ARRAY_SIZE - 1);
	select_sort(array, 0, ARRAY_SIZE - 1);
	printf("after sorted:\n");
	print_array(array, 0 , ARRAY_SIZE - 1);
	printf("insertsort end.\n");

}
