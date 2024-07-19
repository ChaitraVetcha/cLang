#include <stdio.h>
int main()
{
 int a[]={63,21,12,4,35},t,i,j;
 int size=sizeof a/sizeof a[0];
//  printf("%d",size);

  for(i=0;i<size-1;i++)
  {
    // printf("\nouter loop");
    for(j=0;j<(size-i-1);j++)
    {
        // printf("inner loop");
     if(a[j]>a[j+1])
     { 
      t=a[j];
      a[j]=a[j+1];
      a[j+1]=t;
     }
    }
  }
  for(i=0;i<size;i++)
  {
   printf("%d ",a[i]);
  }
}