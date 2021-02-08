#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};

void linked_list_traversal(struct node* ptr)
{
    while(ptr != NULL)
    {
        printf("Elements are: %d\n", ptr->data);
        ptr = ptr -> next;
    }
}

int main()
{
  struct node* head;
  struct node* second;
  struct node* third;

  //type casting
  //Allocate memory for nodes in the linked list in Heap (Dynamic memory allocation)
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
  
  //Link first(head) and second nodes
    head -> data = 111;
    head -> next = second;

//Link second and third
   second -> data = 222;
    second -> next = third;

//Terminate the link at 3rd node
    third -> data = 333;
    third -> next = NULL;

    linked_list_traversal(head);

return 0;
}