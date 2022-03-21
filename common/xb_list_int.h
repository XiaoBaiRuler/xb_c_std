/**
 * @file xb_list.h
 * @author xiaobai.ruler@gamil.com
 * @brief 
 * @version 0.1
 * @date 2022-03-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
struct List{
    int val;
    List *next;
};

/**
 * @brief initialization
 * 
 * @param head 
 * @param val 
 * @param next 
 */
void inits(List *head, int val, List *next);

/**
 * @brief insert
 * 
 * @param node !null
 * @param val 
 * @return List* 
 */
List* insert(List *node, int val);

/**
 * @brief remove
 * 
 * @param node 
 * @return int 1 or 0
 */
int remove(List *node);

/**
 * @brief update
 * 
 * @param node 
 * @param val 
 * @return List* 
 */
List* update(List *node, int val);

/**
 * @brief find val from head -> null
 * 
 * @param head 
 * @param val 
 * @return List* 
 */
List* find(List *head, int val);

void inits(List *head, int val, List *next){
    head -> val = val;
    head -> next = next;
}

List* insert(List *node, int val){
    List next;
    inits(&next, val, NULL);
    if (node -> next == NULL){
        node -> next = &next;
        return node -> next;
    }
    List *next_next = node -> next;
    node->next = &next;
    return node -> next;
}