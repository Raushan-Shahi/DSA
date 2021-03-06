// linked list deletion at end

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

struct node *deleteatend(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;
    while(q->next !=NULL)
    {
        p = p->next;
        q=q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    // allocate memory for nodes in  the linked list in the heap
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
    head = deleteatend(head);
    printf("linked list after deleting at an index: \n");
    linkedlisttraversal(head);
    return 0;
}