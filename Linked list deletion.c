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

//Deleting the 1st node
    struct node* DeleteFirst(struct node* head)
    {
        struct node* ptr;
        ptr=head;
        head=head->next;
        free(ptr);
        return head;
    }
    
//Deleting a node at a given index
     struct node* DeleteAtIndex(struct node* head, int index)
     {
         struct node* p = head;
         struct node* q = head->next;
         for(int i=0; i<index-1;i++)
         {
             p=p->next;
             q=q->next;
         }
         
         p->next=q->next;
         free(q);
         return head;
     }

//Deleting the last node
     struct node* DeleteAtEnd(struct node* head)
     {
         struct node* p = head;
         struct node* q= head->next;
         while(q->next!=NULL)
         {
             p=p->next;
             q=q->next;
         }
         p->next=NULL;
         free(q);
         return head;
     }

//Deleting a node with a given value
    struct node* DeleteValue(struct node* head, int value)
    {
        struct node* p = head;
        struct node* q = head->next;
        while(q->data!=value && q->next!=NULL)
        {
            p=p->next;
            q=q->next;
        }
        if(q->data == value)
        {
            p->next=q->next;
            free(q);
        }
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
    
//Terminating the Linked List at fourth node   
    fourth -> data = 1;
    fourth -> next = NULL;

    printf("LL before\n");
    linked_list_traversal(head);
    
    //head=DeleteFirst(head);
    
    //head=DeleteAtIndex(head,2);
    
    //head = DeleteAtEnd(head);
    
    //head = DeleteValue(head,4);
    
    printf("LL after deletion\n");
    linked_list_traversal(head);

return 0;
}