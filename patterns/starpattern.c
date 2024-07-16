#include <stdio.h>
int main()
{
    int a,b,c,d;

    printf("number of rows required=");
    scanf("%d",&c);

    // For loop to print n rows
    for(a=1;a<=c;a++)
    {
        // For loop to print spaces
        for(d=c;d>=a;d--)
        {
            printf(" ");
        }

        // For loop to print stars
        for(b=1;b<=a;b++)
        {
            printf("* ");
        }
        printf("\n");
    }
}