#include <stdio.h>
#include <string.h>

void revnum(int num[],int f,int e)
 {
  int t;
  while(f<e)
  {
    t=num[f];
    num[f]=num[e];
    num[e]=t;
    f++;
    e--;
  }
 }
void stnum(int num[],int a)   
 {
   int i;
   for(i=0;i<a;i++)
    printf("%d",num[i]);
    printf("\n");
 }

int main()
 {
   int num[] = {1,2,3,4,5};
   int a=5;
   revnum(num,0,a-1);
   printf("rev number is = ");
   stnum(num,a);
   return 0;
 }