//
// Created by User on 10/17/2025.
//

#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H
typedef struct node {
    int data;
    struct node* next;
} node;
node* create_node();
void change_node(node* list,int index,int data);
void print_list(node* list);
void append(node* list,int data);
void delete(node* list,int index);
void insert(node* list,int index, int data);
int length(node* list);
void delete_list(node* list);
#endif //LINKEDLIST_LINKEDLIST_H