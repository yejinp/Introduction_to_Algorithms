#include <stdlib.h>
#include <stdio.h>
#include "linear_sort.h"

int 
main(int argc, char **argv)
{
	size_t k;
	if(argc != 2) {
		printf("Usage: a.out <MAX_NUM>.\n");
		exit(8);
	}

	k = atoi(argv[1]);

	struct int_array	*A = NULL, *B = NULL, *C = NULL;
	A = int_array_new( k << 1 );
	B = int_array_new( k << 1 );
	C = int_array_new(k + 1);

	if(A) {
		randomize_int_array(A, k);
	}
	if(B) {
		randomize_int_array(B, k);
	}
	if(C) {
		randomize_int_array(C, k);
	}
	print_int_array(A);
	counting_sorting(A, B, C);
	print_int_array(B);

}
