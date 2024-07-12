#include <stdio.h>

long int fact(int a)
{
  if(a==1)
         return 1;
  else
         return a*fact(a-1);
}

int main()
{
  int n;
  printf("enter a number=");
  scanf("%d",&n); 
  printf("fact of %d id: %d", n, fact(n));
}
 
