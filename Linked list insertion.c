#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};

void linkedlisttranversal(struct node* ptr)
{
  while(ptr!=NULL)
  {
      printf("Elements: %d\n", ptr->data);
      ptr=ptr->next;
  }
}

//case1
struct node* insertatfirst(struct node* head, int data) //insert at first
{
   struct node* ptr = (struct node*)malloc(sizeof(struct node));
   ptr->next = head;
   ptr->data=data;
   return ptr;
}

//case2
struct node* between(struct node* head, int data,int index)// insert in between
{
   struct node* ptr = (struct node*)malloc(sizeof(struct node));
   struct node* p = head;
   int i=0;
   
   while(i!=index-1)
   {
       p=p->next;
       i++;
   }
   
   ptr->data=data;
   ptr->next=p->next;
   p->next=ptr;
   return head;
   
}


//case3
struct node* insertatend(struct node* head, int data) //insert at end
{
   struct node* ptr = (struct node*)malloc(sizeof(struct node));
   struct node* p = head; // p is a pointer which is poiniting to the head of the linked list

   ptr->data=data;
   
   while(p->next!=NULL)
   {
       p=p->next;
   }
   ptr->next = NULL;
   p->next=ptr;
   return head;
}


//case4
struct node* insertafternode(struct node* head, struct node* prevnode, int data) //insert after the node
{
   struct node* ptr = (struct node*)malloc(sizeof(struct node));
   ptr->data=data;
   
    ptr->next = prevnode->next;
    prevnode->next=ptr;
   return head;
}


int main()
{
    struct node* head;
    struct node* second;
    struct node* third;
    struct node* fourth;
    
    head = (struct node*)malloc(sizeof(struct node*));
    second = (struct node*)malloc(sizeof(struct node*));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));
    
    head -> data = 111;
    head -> next = second;
    
    second -> data = 222;
    second -> next = third;
    
    third -> data = 333;
    third -> next = fourth;
    
    fourth -> data = 444;
    fourth -> next = NULL;
    
    printf("linked list:\n");
    linkedlisttranversal(head);
    printf("After:\n");
    //head = insertatfirst(head,555);
    //head = insertatend(head,566);
    //head = between(head,898,1);
    //head = insertafternode(head, second, 45);
    linkedlisttranversal(head);
    
    return 0;
}