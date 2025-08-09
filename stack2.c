#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 20

struct TwoStacks {
    int arr[MAXSIZE]; // Array of size MAXSIZE, with indices from 0 to MAXSIZE-1
    int top1;              // Top of Stack 1
    int top2;              // Top of Stack 2 (starts from MAXSIZE - 1)
} S;

// Initialize the two stacks

// Push operation for Stack 1
void push1(struct TwoStacks *s, int value) {
    if (s->top1 + 1 == s->top2) { // Check if both stacks overlap
        printf("Stack Overflow for Stack 1! Cannot push %d.\n", value);
    } else {
        s->top1++;
        s->arr[s->top1] = value;
        printf("Pushed %d onto Stack 1.\n", value);
    }
}

// Push operation for Stack 2
void push2(struct TwoStacks *s, int value) {
    if (s->top1 + 1 == s->top2) { // Check if both stacks overlap
        printf("Stack Overflow for Stack 2! Cannot push %d.\n", value);
    } else {
        s->top2--;
        s->arr[s->top2] = value;
        printf("Pushed %d onto Stack 2.\n", value);
    }
}

// Pop operation for Stack 1
int pop1(struct TwoStacks *s) {
    if (s->top1 == -1) { // Check if Stack 1 is empty
        printf("Stack Underflow for Stack 1! Cannot pop.\n");
        return -1;
    } else {
        int value = s->arr[s->top1];
        s->top1--;
        printf("Popped %d from Stack 1.\n", value);
        return value;
    }
}

// Pop operation for Stack 2
int pop2(struct TwoStacks *s) {
    if (s->top2 == MAXSIZE) { // Check if Stack 2 is empty
        printf("Stack Underflow for Stack 2! Cannot pop.\n");
        return -1;
    } else {
        int value = s->arr[s->top2];
        s->top2++;
        printf("Popped %d from Stack 2.\n", value);
        return value;
    }
}

// Display elements of Stack 1
void display1(struct TwoStacks *s) {
    if (s->top1 == -1) {
        printf("Stack 1 is empty.\n");
    } else {
        printf("Stack 1 elements are:\n");
        for (int i = 0; i <= s->top1; i++) {
            printf("%d ", s->arr[i]);
        }
        printf("\n");
    }
}

// Display elements of Stack 2
void display2(struct TwoStacks *s) {
    if (s->top2 == MAXSIZE) {
        printf("Stack 2 is empty.\n");
    } else {
        printf("Stack 2 elements are:\n");
        for (int i = MAXSIZE - 1; i >= s->top2; i--) {
            printf("%d ", s->arr[i]);
        }
        printf("\n");
    }
}

// Main function to demonstrate the operations
int main() {
    S.top1 = -1;           // Stack 1 starts from index -1 (empty)
    S.top2 = MAXSIZE; // Stack 2 starts from MAXSIZE (top2 starts at MAXSIZE)

    push1(&S, 10);
    push1(&S, 20);
    push1(&S, 30);

    push2(&S, 40);
    push2(&S, 50);
    push2(&S, 60);

    display1(&S);
    display2(&S);

    pop1(&S);
    pop2(&S);

    display1(&S);
    display2(&S);

    return 0;
}
