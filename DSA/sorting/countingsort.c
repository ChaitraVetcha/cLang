#include <stdio.h>

void countingSort(int arr[], int n) 
{
    int max = arr[0];
    for(int i = 1; i < n; i++) 
    {
        if(arr[i] > max) 
        {
            max = arr[i];
        }
    }
  
    int count[max + 1];
    for(int i = 0; i <= max; i++) 
    {
        count[i] = 0;
    }

    for(int i = 0; i < n; i++) 
    {
        count[arr[i]]++;
    }

    int index = 0;
    for(int i = 0; i <= max; i++)
    {
        while(count[i] > 0) 
        {
            arr[index++] = i;
            count[i]--;
        }
    }
}

int main() 
{
    int arr[] = {4, 2, 2, 6, 3, 3, 1, 6, 5, 2, 3, 8, 9, 7, 7, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    countingSort(arr, n);
    
    printf("Sorted array: ");
    for(int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
