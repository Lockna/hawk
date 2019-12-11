//
// Created by lockna on 12/11/19.
//
#include "../compiler/token.h"
#ifndef HAWK_T_LIST_H
#define HAWK_T_LIST_H

typedef struct t_Node {

    struct Ha_Token value;
    struct t_Node* next;
    struct t_Node* previous;

} T_Node;

typedef struct t_list {

    int length;
    struct t_Node* head;
    struct t_Node* tail;

} T_List;

#endif //HAWK_T_LIST_H