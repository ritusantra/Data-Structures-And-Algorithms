#include<stdio.h>
#include<stdlib.h>

//structure of stack
struct stack
{
    int size;
    int top;
    int *arr;
};


int isEmpty(struct stack* ptr)
{
    if(ptr->top == -1)
    {
       return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack* ptr)
{
    if(ptr->top == ptr->size-1)
    {
       return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack* ptr, int val)
{
    if(isFull(ptr))
    {
        printf("Stack overflow! Cannot push %d to the stack\n", val);
    }
   else
{
    ptr->top++;
    ptr->arr[ptr->top] = val;
}
}

int pop(struct stack* ptr)
{
    if(isEmpty(ptr))
    {
        printf("Stack underflow! Cannot pop from the stack\n");
        return -1;
    }
   else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int main()
{
    struct stack *sp; //sp is a structure pointer to store the address of the structure
    sp->size = 5;
    sp->top = -1;
    sp->arr = (int*)malloc(sp->size * sizeof(int));
    printf("Stack has been done successfully!\n");

    printf("Before pushing, Full: %d\n", isFull(sp));
    printf("Before pushing, Empty:%d\n", isEmpty(sp));

    push(sp,51);
    push(sp,52);
    push(sp,53);
    push(sp,54);
    push(sp,55);
    

    printf("After pushing, Full:%d\n", isFull(sp));
    printf("After pushing, Empty:%d\n", isEmpty(sp));

    printf("Popped %d from the stack\n", pop(sp)); // LIFO
    printf("Popped %d from the stack\n", pop(sp)); //LIFO
    printf("Popped %d from the stack\n", pop(sp)); //LIFO
    return 0;
}



