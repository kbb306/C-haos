    #include <stdio.h>
    #include "LinkedList.h"
    #include <stdlib.h>

    node* create_node() {
        node* head = (node*)malloc(sizeof(node));
        head->next = NULL;
        return head;
    }

    void change_node(node* list,int index,int data) {
        if (index > length(list)) {
            printf("Node does not exist\n");
            return;
        }
        node* current = list;
        for (int i = 0; i < index; i++) {
            if (current != NULL) {
                current = current->next;
            }
        }
        if (current != NULL) {
            current->data = data;
        }
    }

    void print_list(node* list) {
        node* current = list;
        while (current != NULL) {
            printf("%d ", current->data);
            printf("\n");
            current = current->next;
        }
    }

    void append(node* list,int data) {
        node* current = list;
        while (current ->next != NULL) {
            current = current->next;
        }
        node* newNode = create_node();
        newNode->data = data;
        current->next = newNode;
    }

    void delete(node* list, int index) {
        if (index > length(list)) {
            printf("Node does not exist\n");
            return;
        }
        node* prev = list;
        for (int i = 0; i < index - 1; i++) {
            prev = prev->next;
        }
        node* current = prev->next;
        node* next = current->next;
        prev->next = next;
    }

    void insert(node* list, int index, int data) {
        if (index < 0 || index > length(list)-1) {
            printf("Invalid Index\n");
            return;
        }
        node* prev = list;
        for (int i = 0; i < index - 1; i++) {
            prev = prev->next;
        }
        node* current = prev->next;
        node* newNode = create_node();
        newNode->data = data;
        newNode->next = current;
        prev->next = newNode;
    }

void delete_list(node* list) {
        node* current = list;
        if (current == NULL) {
            printf("List does not exist\n");
            return;
        }
        while (current != NULL) {
            node* next = current->next;
            printf("Freeing node at %p... \n",current);
            free(current);
            current = next;
        }

    }

int length(node* list) {
        node* current = list;
        int length = 0;
        while (current->next) {
            length++;
            current = current->next;
        }
        return length;
    }
