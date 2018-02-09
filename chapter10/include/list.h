#ifndef _LIST_H_
#define _LIST_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct single_list{
    struct single_list *next;
    void *data;
};

struct single_head {
    struct single_list *head;
};

struct double_list{
    struct double_list *prev;
    struct double_list *next;
    void *data;
};

struct double_head {
    struct double_list *head;
};

struct single_list * single_list_create();
void single_list_free(struct single_list *s);

struct double_list * double_list_create();
void double_list_free(struct double_list *d);

#endif
