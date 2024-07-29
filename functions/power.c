#include <stdio.h>

  int power(int x,int n)
  {
    if(n==0)
       return 1;
    else
       return x*power(x,n-1);
  }

  int main()
  {
    int x=3,n=2;
    int r=power(x,n);
    printf("%d",r);
  }
