#include "list.h"

struct single_list * single_list_create()
{
	struct single_list *s = NULL;
	s = (struct single_list *) malloc(sizeof(struct single_list));
	if(s == NULL) {
		printf("malloc single_list failed.\n");
	}
	memset(s, 0, sizeof(*s));

	return s;
}

void single_list_free(struct single_list *s)
{
	free(s);
}

int single_list_insert(struct single_list *hs, struct single_list *s)
{
	if(NULL == hs || NULL == s) {
		return 0;
	}

	s->next = hs->next;
	hs->next = s;

	return 1;
}

int single_list_delete(struct single_list *hs, struct single_list *s)
{
	if(hs == NULL || s == NULL) {
		return 0;
	}
	struct single_list *ts = NULL;
	for(ts = hs->next; ts != NULL; ts = ts->next) {
		if(NULL != ts && ts->next == s) {
			ts->next = s->next;
			break;
		}
	}

	return 1;
}

struct double_list * double_list_create()
{
	struct double_list *d = NULL;
	d = (struct double_list *)malloc(sizeof(struct double_list));
	
	if(d == NULL) {
		printf("malloc double failed.\n");
	}
	memset(d, 0, sizeof(*d));
	return d;
}

void double_list_free(struct double_list *d)
{
	free(d);
}

int double_list_insert(struct double_list *hd, struct double_list *d)
{
	struct double_list *td = NULL;

	if( hd == NULL || d == NULL)
	{
		return 0;
	}

	td = hd->next;
	hd->next = d;
	d->prev = hd;

	if(td)
	{
		td->prev = d;
	}

	return 1;
}

int double_list_delete(struct double_list *hd, struct double_list *d)
{
	struct double_list *td = NULL;
	if(hd == NULL || d == NULL)
	{
		return 0;
	}

	for(td = hd->next; td; td = td->next) 
	{
		if(td == d) 
		{
			
			break;	
		}
	}
	return 1;
}
