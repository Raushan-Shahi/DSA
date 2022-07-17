//peek operation using linked list on stack 


#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedlisttraversal(struct node *ptr)
{
    printf("the stack is:\n");
    while (ptr != NULL)
    {
        printf("Element is: %d\n", ptr->data);
        ptr = ptr->next;
    }
    printf("--end of stack--\n");
}

int isempty(struct node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    return 0;
}

int isfull(struct node *top)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    if (p == NULL)
    {
        return 1;
    }
    return 0;
}

struct node *push(struct node *top, int x)
{
    if (isfull(top))
    {
        printf("stack overflow,cannot push any element.\n");
    }
    else
    {
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

int pop(struct node **top)
{
    if (isempty(*top))
    {
        printf("the stack is underflow, cannot pop any element.\n");
        return 0;
    }
    else
    {
        struct node *n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
}

void peek(struct node *top, int pos)
{
    struct node *ptr = top;
    for(int i =0; (i< pos-1 && ptr!= NULL); i++)
    {
        ptr = ptr->next;
    }
    if(ptr!= NULL)
    {
        printf("the value at postion %d is %d.\n",pos, ptr->data);
    }
    else{
        printf("this position %d is invalid, no value at this position.\n",pos);
    }
}

int main()
{
    struct node *top = NULL;
    top = push(top, 11);
    peek(top, 1);
    top = push(top, 12);
    top = push(top, 13);
    linkedlisttraversal(top);
    peek(top, 2);
    peek(top, 3);
    int element = pop(&top);
    printf("popped element is %d\n", element);
    peek(top, 5);
    linkedlisttraversal(top);
    return 0;
}