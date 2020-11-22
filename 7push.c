//push some numbers stack in c(insert)
#include<stdio.h>
#define STACK_MAX 10

typedef struct
{
    int top;
    int data[STACK_MAX];
}stack;

void push(stack *s, int item)
{
    if(s->top < STACK_MAX)
    {
        s->data[s->top] = item;
        s->top = s->top+1;
    }
    else
    {
        printf("stack is full!\n");
    }
}

int pop(stack *s)
{
    int item;
    if(s->top== 0)
    {
        printf("stack is empty!\n");
        return-1;
    }
    else
    {
       s->top = s->top-1;
       item = s->data[s->top];
    }
    return item;
}

