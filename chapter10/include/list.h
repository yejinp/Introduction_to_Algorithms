#ifndef _LIST_H_
#define _LIST_H_

struct single_list{
    int key;
    struct single_list *next;
};

struct single_head {
    struct single_list *head;
};

struct double_list{
    int key;
    struct double_list *prev;
    struct double_list *next;
};

struct double_head {
    struct double_list *head;
};

#endif
