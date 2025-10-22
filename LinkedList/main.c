#include <stdio.h>
#include <stdlib.h>

#include "LinkedList.h"
int data;
node* list = NULL;
int main() {
    int choice = 0;
    while (choice != 6) {
        printf("Welcome to Linked List\n");
        printf("1. Create New List\n");
        printf("2. Print List\n");
        printf("3. Append to list\n");
        printf("4. Delete Item in List\n");
        printf("5. Insert item at index\n");
        printf("6. Quit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch (choice) {
            case 1: {
                printf("Enter the data you want to add : ");
                scanf("%d",&data);
                node* head = create_node();
                change_node(head,0,data);
                list = head;
                break;
            }
            case 2: {
                if (list == NULL) {
                    printf("Make a list first\n");
                }
                else {
                    print_list(list);
                }
                break;
            }
            case 3: {
                if (list == NULL) {
                    printf("Make a list first\n");
                }
                else {
                    printf("Enter data you want to add : ");
                    scanf("%d",&data);
                    append(list,data);
                }
                break;
            }
            case 4: {
                if (list == NULL) {
                    printf("Make a list first\n");
                }
                else {
                    int i = -1;
                    while (i < 0) {
                        printf("Enter index number of node to delete: ");
                        scanf("%d",&i);
                    }
                    delete(list,i);
                }
                break;
            }
            case 5: {
                if (list == NULL) {
                    printf("Make a list first\n");
                }
                else {
                    int i = -1;
                    printf("Enter index to insert at: ");
                    scanf("%d",&i);
                    printf("Enter data to insert: ");
                    scanf("%d",&data);
                    insert(list,i,data);
                }
                break;
            }
            case 6: {
                delete_list(list);
                printf("Goodbye!");
                break;
            }
            default: {
                printf("Invalid Choice\n");
                break;
            }
        }
    }
return 0;
}