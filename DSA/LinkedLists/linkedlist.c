#include <stdio.h>
#include <stdlib.h>

struct node
{ 
  int data;
  struct node *next;
};

void printlinkedlist(struct node *p)
{
  while(p!=NULL)
  {
    printf("%d ",p->data);
    p=p->next;
  }
  printf("\n");
}

void main()
{
  struct node *head,*one,*two,*three,*four,*five,*ptr;

  one=malloc(sizeof(struct node));
  two=malloc(sizeof(struct node));
  three=malloc(sizeof(struct node));
  four=malloc(sizeof(struct node));
  five=malloc(sizeof(struct node));

  one->data=10;
  two->data=20;
  three->data=30;

  one->next=two;
  two->next=three;
  three->next=NULL;

  head=one;
  printf("Linked list\n");
  printlinkedlist(head);

  // insert at front logic

  four->data=40;
  four->next=head;
  head=four;
  printf("Linked list after inserting front\n"); 
  printlinkedlist(head);

  // insert at the end

  five->data=50;
//   five->next=NULL;
  ptr=head;
  while(ptr!=NULL)
  {
    if(ptr->next==NULL)
    {
       ptr->next=five;
    //    break;
    }
    
    ptr=ptr->next;
  }
  five->next=NULL;

  printf("Linked list after inserting at last\n");
  printlinkedlist(head);
}
