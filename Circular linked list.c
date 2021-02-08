#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

//traversal of circular linked list
void traversal(struct node* head)
{
    struct node* ptr = head;
    do
    {
    printf("Elements: %d \n", ptr->data);
    ptr=ptr->next;
    }
    while(ptr!=head);
}

//Insertion at the beginning 
struct node* insert(struct node* head, int data)
{
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    
    struct node* p  = head;
    while(p->next!=head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
}



int main()
{
  struct node* head;
  struct node* second;
  struct node* third;
  struct node* fourth;

  //type casting
  //Allocate memory for nodes in the linked list in Heap (Dynamic memory allocation)
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));
  
  //Link first(head) and second nodes
    head -> data = 4;
    head -> next = second;

//Link second and third
   second -> data = 3;
    second -> next = third;

//Link third and fourth 
    third -> data = 8;
    third -> next = fourth;
    
//Link the fourth node to the head node
    fourth -> data = 1;
    fourth -> next = head;
    
    printf("Before Insertion\n");
    traversal(head);
   
    head = insert(head,10);
    
     printf("After Insertion\n");
    traversal(head);
}