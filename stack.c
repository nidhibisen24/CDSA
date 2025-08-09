#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define SIZE 20

struct stack
{
    int data[SIZE];
    int top;
} S;

void push(struct stack *s, int value)
{
    if (s->top == SIZE - 1)
    {
        printf("Stack is full\n",value);
    }
    else
    {
        s->top++;
        s->data[s->top] = value;
        printf("Pushed %d into a stack\n", value);
    }
}

int pop(struct stack *s ){
    int value;
    if (s->top==-1)
    {
        printf("Stack is empty\n");
        return -1;
    }
    else{
        value = s->data[s->top];
        s->top--;
        printf("Popped %d from a stack\n",value);
        return value;

    } 
}

void display(struct stack*s){
    if (s->top == -1)
    {
      printf("stack is empty\n");
    }
    else
    {
        printf("stack elements are:\n");
        for (int i = s->top; i >=0; i--)
        {
           printf("%d \n",s->data[i]);
        }       
    } 
}
int main(){
    S.top=-1;
    push(&S, 10);
    push(&S, 20);
    push(&S, 30);

    display(&S);

    pop(&S);
    pop(&S);

    display(&S);

    return 0;

}