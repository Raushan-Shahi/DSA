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
    else 
    {
        return 0;
    }
};

// int isfull(struct stack *ptr)
// {
//     if (ptr->top == ptr->size - 1)
//     {
//         return 1;
//     }
//     return 0;
// };

int main()
{
    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *)malloc(s.size * sizeof(int));

    struct stack * s;
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    printf("%d\n",s->size);

    int c = isempty(s);

    printf("%d\n",s->size);

    if (c == 1 )
    {
        printf("the stack is empty.");
    }
    else
    {
        printf("the stack is not empty.");
    }

    printf("%d\n",s->size);

    return 0;
}