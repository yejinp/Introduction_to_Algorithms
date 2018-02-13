#ifndef _LIST_H_
#define _LIST_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct single_list{
    struct single_list *next;
    void *data;
};

struct double_list{
    struct double_list *prev;
    struct double_list *next;
    void *data;
};

int single_list_insert(struct single_list *hs, struct single_list *s);
struct single_list *single_list_create();
void single_list_free(struct single_list *s);

struct double_list *double_list_create();
void double_list_free(struct double_list *d);

#endif
