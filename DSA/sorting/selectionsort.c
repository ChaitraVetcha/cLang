#include <stdio.h>
int main()
{
 int a[]={63,218,182,4,35},t,i,j;
 int size=sizeof a/sizeof a[0];

  for(i=0;i<size-1;i++)
  {
   for(j=i+1;j<size;j++)
   {
    if(a[i]>a[j])
    { 
     t=a[i];
     a[i]=a[j];
     a[j]=t;
    }
   }
  }
  for(i=0;i<size;i++)
  {
   printf("%d ",a[i]);
  }
}