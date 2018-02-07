
#include "list.h"


struct single_list * single_list_create()
{
	struct single_list *s = NULL;
	s = (struct single_list *) malloc(sizeof(struct single_list));
	if(s == NULL) {
		printf("malloc single_list failed.\n");
	}

	return s;
}

void single_list_free(struct single_list *s)
{
	free(s);
}

int single_list_insert(struct single_head *h, struct single_list *s)
{

	return 1;
}

struct double_list * double_list_create()
{
	struct double_list *d = NULL;
	d = (struct double_list *)malloc(sizeof(struct double_list));
	
	if(d == NULL) {
		printf("malloc double failed.\n");
	}
	return d;
}

void double_list_free(struct double_list *d)
{
	free(d);
}

int double_list_insert(struct double_head *h, struct double_list *d)
{

	return 1;
}
