#include <stdio.h>
#include <stdlib.h>

#include "list.h"
#include "data.h"

int main(int argc, char **argv) {
	printf("list\n");
	struct single_head *hs = NULL;
	struct double_head *hd = NULL;
	
	hs = (struct single_head *) malloc(sizeof(struct single_head));
	if(hs == NULL) {
		printf("malloc single_head failed.\n");
		exit(5);
	}

}
