#ifndef  __STACK_H__
#define  __STACK_H__

struct stack_t {
    unsigned long size;
    unsigned long top;
    void **data;
};

struct stack_t * stack_create(unsigned long size);

int stack_empty(struct stack_t *s);

unsigned long stack_get_size(struct stack_t *s);

unsigned long stack_get_count(struct stack_t *s);

void *stack_pop(struct stack_t *s);

void stack_free(struct stack_t *s);

int stack_push(struct stack_t *s, void *data);


#endif
