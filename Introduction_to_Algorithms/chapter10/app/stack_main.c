#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "data.h"

void pop_all(struct stack_t *s)
{
    if(s == NULL) {
        return;
    }

}

void push_all()
{

}


int main(int argc, char ** argv) 
{

    struct stack_t *s = stack_create(1024);
    struct data * d1 = (struct data *) malloc(sizeof(struct data*));
    struct data * d2 = (struct data *) malloc(sizeof(struct data*));
    struct data * d3 = (struct data *) malloc(sizeof(struct data*));
    struct data * d4 = (struct data *) malloc(sizeof(struct data*));
    struct data * d5 = (struct data *) malloc(sizeof(struct data*));
    struct data *d = NULL;

    d1->key = 1;
    d2->key = 2;
    d3->key = 3;
    d4->key = 4;
    d5->key = 5;
   
    if(s == NULL) {
        printf("stack create failed!\n");
    }

    stack_push(s, (void *)d1);
    stack_push(s, (void *)d2);
    d = stack_pop(s);

    if(d) {
        printf("data of d is:%d\n", d->key);
        free(d);
        d = NULL;
    }

    
    printf("test\n");
    stack_free(s);
}
