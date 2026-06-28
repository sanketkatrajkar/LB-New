

#include<stdio.h>
#include<stdlib.h>


/*
Accpet the Number from user Display Frequency of even numbers 

Input : 6

      element : 85 66 3 16 93 88

Output : 3

*/

int CountEven(int arr[] , int size)
{
   int count = 0; 

   for(int i = 0; i < size; i++)
   {
      if(arr[i] % 2 == 0)
      {
        count++;
      }
   }

   return count;
}



int main()
{
    int size = 0;
    int *arr = NULL;

    printf("Enter size of Array \n");
    scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory allocation invalide\n");
        return -1;
    }

    printf("Enter the element \n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int ans = CountEven(arr, size);
    printf("Even Number Frequency : %d", ans);


    return 0;
}