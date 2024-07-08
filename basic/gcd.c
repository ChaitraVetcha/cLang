#include <stdio.h>

int main()
{
    int a,b,g,small,gcm;
    printf("NUMBER 1=");
    scanf("%d",&a);
    printf("NUMBER 2=");
    scanf("%d",&b);
    if(a<b)
      small=a;
    else
      small=b;
    if(a!=b)
      small=small/2;
    for(g=1;g<=small;g++)
    {
        if((a%g==0)&&(b%g==0))
           gcm=g;
    }
      printf("gcm is %d",gcm);
}