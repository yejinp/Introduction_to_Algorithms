#include <stdio.h>
#include <stdlib.h>
#include "str_match.h"

int
main(int argc, char **argv)
{

	if(argc != 3) {
		printf("Usage: %s <text> <pattern>\n", argv[0]);
		exit(9);
	}

	naive_string_match(argv[1], argv[2]);
}
