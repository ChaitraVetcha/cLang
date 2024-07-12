#include <stdio.h>
int main()
{
 int x[2][3]={{1,2,3},{1,1,1}},y[3][2]={{1,1},{2,1},{3,1}},i,j,k,sum;

  for(k=0;k<2;k++)
  {
    for(i=0;i<2;i++)
    {
      sum=0;

      for(j=0;j<3;j++)
      {
       sum=sum+(x[k][j]*y[j][i]);
      }
      printf("%d\t",sum);
    } 
      printf("\v");
  }
}