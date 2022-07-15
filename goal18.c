// insertion at end in a circular linked list 


#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void clltraversal(struct node *head)
{
    struct node * ptr = head;
    do
    {
        printf("Element is: %d\n", ptr->data);
        ptr = ptr->next;
    }
    while (ptr != head);
}

struct node * insertatend(struct node *head, int data)
{
    struct node * ptr = (struct node *) malloc (sizeof(struct node));
    ptr->data = data ;
    struct node * p = head->next;
    while(p->next != head){
    p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
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

    // enter the value of first node and link it to the third node
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
    fourth->next = head;

    clltraversal(head);
    head = insertatend( head, 23);
    clltraversal(head);
    return 0;
}
