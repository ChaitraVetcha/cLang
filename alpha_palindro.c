#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main()
{
 char word[20];
 int a,b;
 bool p=false;
  
  printf("enter a word=");
  scanf("%s",word);

  b=(strlen(word)-1);
  
   for(a=0;a<=b;a++)
  { 
    if (word[a]==word[b-a])
      {
         p=true;
       continue;
      }
    else
      { 
       p=false;
       break;
      }
  }
 if (p==true)
  printf("the given word is a palindrom");
 else
  printf("the given word is not a palindrom");
}