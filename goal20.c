// double linked list traversal 


#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

void linkedlisttraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element is: %d\n", ptr->data);
        ptr = ptr->next;
    }
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

    // enter the value of first node and link it to the third node
    head->prev = NULL;
    head->data = 7;
    head->next = second;

    // linked the second node to the third node
    second->prev = head;
    second->data = 77;
    second->next = third;

    // third node is linked to fourth
    third->prev = second;
    third->data = 777;
    third->next = fourth;

    // fourth node is linked to null
    fourth->prev = third;
    fourth->data = 7777;
    fourth->next = NULL;

    linkedlisttraversal(head);
    printf("%d", second->prev);
    return 0;
}