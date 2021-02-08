
#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node* prev;
  struct node* next;
};

//traversal
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

//reverse
void reverse(struct node* n4)
{
    struct node* p = n4;
    do
    {
    printf("Elements: %d \n", p->data);
    p=p->prev;
    }
    while(p!=n4);
}

int main ()
{
  struct node* head = (struct node*)malloc(sizeof(struct node));
  struct node* n2 = (struct node*)malloc(sizeof(struct node));
  struct node* n3 = (struct node*)malloc(sizeof(struct node));
  struct node* n4 = (struct node*)malloc(sizeof(struct node));
  
  head->next=n2;
  head->prev=NULL;
  head->data=5;
  
  n2->next=n3;
  n2->prev=head;
  n2->data=15;
  
  n3->next=n4;
  n3->prev=n2;
  n3->data=25;
  
  n4->next=NULL;
  n4->prev=n3;
  n4->data=35;
  
  //traversal(head);
  reverse(n4);
  return 0;
}
