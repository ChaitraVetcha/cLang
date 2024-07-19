#include <stdio.h>
#include <stdlib.h>

struct node
{ 
  int data;
  struct node *next;
};

void printlinkedlist(struct node *p)
{
  int s=0; 
  while(p!=NULL)
  {
    printf("%d\n",p->data);
    s = s + p->data;
    p=p->next;
  }
  printf("sum is %d",s);
}

void main()
{
  struct node *head,*one,*two,*three;
  one=malloc(sizeof(struct node));
  two=malloc(sizeof(struct node));
  three=malloc(sizeof(struct node));

  one->data=10;
  two->data=20;
  three->data=30;

  one->next=two;
  two->next=three;
  three->next=NULL;

  head=one;

  printlinkedlist(head);
}