#include <stdio.h>
#include<stdlib.h>


struct stack
{
  int size;
  int top;
  int *arr;
};

//To check, if the stack is full or isEmpty

/*int isEmpty(struct stack * ptr)
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
*/

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
   


int main()
{
   //struct stack s;
   //s.size = 6;
   //s.top = -1;
   //s.arr = (int*)malloc(s.size * sizeof(int));
    

    struct stack *s;
    s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 80;
    s->top = -1;
    s->arr = (int*)malloc(s->size * sizeof(int));
    
    

//Pushing elements to the stack

    s->arr[0] = 7;
    s->top++;
    
    s->arr[1] = 9;
    s->top++;
    
    s->arr[2] = 11;
    s->top++;
    
    s->arr[3] = 56;
    s->top++;
    
    s->arr[4] = 45;
    s->top++;
    
    
    


//Checking if the stack is empty or not

    if(isFull(s))
    {
        printf("Stack is empty");
    }
    else
    {
        printf("Stack is not empty");
    }
}