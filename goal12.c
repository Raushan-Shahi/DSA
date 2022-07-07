// linked list deletion at head

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedlisttraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node *deletefirstnode(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    // allocate memry for nodes in  the linked list in the heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    // enter the value of first node and link it to the second node
    head->data = 7;
    head->next = second;

    // linked the second node to the third node
    second->data = 77;
    second->next = third;

    // third node is linked to fourth
    third->data = 777;
    third->next = fourth;

    // fourth node is linked to null
    fourth->data = 7777;
    fourth->next = NULL;

    linkedlisttraversal(head);
    head = deletefirstnode(head);
    printf("linked list after deleting first node: \n");
    linkedlisttraversal(head);
    return 0;
}