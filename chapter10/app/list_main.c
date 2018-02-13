#include <stdio.h>
#include <stdlib.h>

#include "list.h"
#include "data.h"

int main(int argc, char **argv) {
	printf("list\n");
	struct single_list *hs = NULL;
	struct double_list *hd = NULL;
	
	hs = (struct single_list *) malloc(sizeof(struct single_list));
	if(hs == NULL) {
		printf("malloc single_list failed.\n");
		exit(5);
	}

}
