#include <stdio.h>

int main() 
{
    int Array[] = {23,45,12,34,22,46,77};
    int n = sizeof(Array) / sizeof(Array[0]);

    for (int i = 1; i < n; i++) 
    {
        int insert = i;
        int currentVal = Array[i];
        int j = i - 1;

        while (j >= 0 && Array[j] > currentVal)
        {
            Array[j + 1] = Array[j];
            insert = j;
            j--;
        }
        Array[insert] = currentVal;
    }

    printf("array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",Array[i]);
    }
}


