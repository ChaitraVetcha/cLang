#include <stdio.h>

int diff (int a,int b)
{
    int c;
    c=a-b;
    return c;
}

int main()
{
    int x,y,z;
    x = diff (23,9);
    printf("sum is %d \n",x);
    y = diff (7,8);
    printf("sum is %d \n",y);
    z = diff (4,98);
    printf("sum is %d",z);
}
