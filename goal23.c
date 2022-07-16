// peek operation on stack using array
// stack top and stack bottom on stack 

#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isempty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
        return 0;
};

int isfull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
        return 0;
};

void push(struct stack * ptr, int val)
{
    if(isfull(ptr))
    {
        printf("the stack is overflowing, cannot push %d.\n",val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
};

int pop(struct stack * ptr)
{
    int val;
    if(isempty(ptr))
    {
        printf("the stack is underflowing, cannot pop.\n");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->arr[ptr->top] = val;
        ptr->top--;
        return val;
    }
};

int peek(struct stack * ptr, int i)
{
    int arrayind = ptr->top -i + 1;
    if(arrayind < 0)
    {
        printf("not a valid position for the stack.\n");
        return -1;
    }
    else
    {
        return ptr->arr[arrayind];
    }
}
int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("the stack has been created successfully.\n");
    printf("%d, here 1 means full and 0 means not full\n", isfull(sp));
    printf("%d, here 1 means empty and 0 means not empty\n", isempty(sp));
    printf("%d\n",pop(sp));
    push(sp, 23);
    push(sp, 24);
    push(sp, 25);
    push(sp, 26);
    push(sp, 27);
    push(sp, 28);
    printf("%d\n",peek(sp,4));
    push(sp, 29);
    push(sp, 30);
    push(sp, 31);
    push(sp, 32);
    push(sp, 33);
    push(sp, 34);
    push(sp, 35);
    printf("%d\n",peek(sp, 6));
    printf("%d, here 1 means full and 0 means not full\n", isfull(sp));
    printf("%d, here 1 means empty and 0 means not empty\n",isempty(sp));
    printf("%d\n",pop(sp));
    printf("%d\n",peek(sp, 16));
    printf("%d\n",pop(sp));
    printf("%d\n",pop(sp));
    printf("%d, here 1 means full and 0 means not full\n", isfull(sp));
    printf("%d, here 1 means empty and 0 means not empty\n",isempty(sp));
    return 0;
}
