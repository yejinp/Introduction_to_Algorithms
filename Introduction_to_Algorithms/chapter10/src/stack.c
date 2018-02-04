#include <stdlib.h>
#include <stdio.h>
#include <strings.h>

#include "stack.h"

unsigned long stack_get_count(struct stack_t *s)
{
    if(s == NULL) {
       return 0;
    }

   return s->top;
}

unsigned long stack_get_size(struct stack_t *s)
{
    if(s == NULL) {
       return 0;
    }

   return s->size;
}

struct stack_t * stack_create(unsigned long size)
{
    if(size == 0)
    {
        return NULL;
    }

    struct stack_t *s = (struct stack_t *) malloc(sizeof(struct stack_t));
    if(s == NULL) {
        return NULL; 
    }

    s->data = (void **) malloc(sizeof(void*) * size);
    if(s->data == NULL) {
        free(s);
        return NULL;
    }
    bzero(s->data, sizeof(void*) * size);

    s->size = size;
    s->top = 0;
    return s;
}

void stack_free(struct stack_t *s)
{

   if(s && s->data) {
      free(s->data);
      free(s);
    }
}

int stack_empty(struct stack_t *s)
{
   if(s == NULL) {
      return 0;
    }

   return s->top == 0;
}

int stack_full(struct stack_t *s)
{
    if(s == NULL) {
        return 1;
    }

    return s->top + 1 == s->size;
}

void *stack_pop(struct stack_t *s)
{
    if(s == NULL || stack_empty(s)) {
      return NULL;
    }
    void * data = s->data[s->top - 1];
    s->top --; 
    return data;
}

int stack_push(struct stack_t *s, void *data)
{
    if(s == NULL || stack_full(s)) {
        return 0;
    }
    s->data[s->top] = data;
    s->top ++;
    return 1;
}

