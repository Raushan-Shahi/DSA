// paranthesis matching using stack 
//single paranthesis matching 


#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    char *arr;
};

int isempty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isfull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack * ptr, char val)
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
}

char pop(struct stack * ptr)
{
    if(isempty(ptr))
    {
        printf("the stack is underflowing, cannot pop.\n");
        return -1;
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->arr[ptr->top] = val;
        ptr->top--;
        return val;
    }
};

int paranthesismatch(char *exp)
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));

    for(int i=0; exp[i]!= '\0'; i++)
    {
        if(exp[i]== '(')
        {
            push(sp, '(');
        }
        else if(exp[i] == ')')
        {
            if(isempty(sp))
            {
                return 0;
            }
            pop(sp);
        }
    }

    if(isempty(sp))
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

int main()
{
    char *exp = "{}{{{";

    // Check if stack is empty
    if (paranthesismatch(exp))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}
