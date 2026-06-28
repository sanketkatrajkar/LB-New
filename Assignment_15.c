

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


/*
Accpet the Number from user and accpet one more number form use check wheather this number is present or not in array 

Input : 6

No : 16

element : 85 66 3 16 93 88

Output : true

No : 44

Output : fasle

*/

bool isPresent(int arr[], int size , int No)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == No)
        {
           return true;
        }
    }

    return false;
}

/*
Accpet the Number from user and accpet one more number and return first Occerenc of Number

Input : 6

No : 66

element : 85 66 3 16 66 88

Output : 1


*/

int FisrtOcc(int arr[] , int size , int No) 
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == No)
        {
            return i;
        }
    }

    return -1;
}

int lastOcce(int arr[], int size, int No)
{
    int index = -1;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] == No)
        {
            index = i;
        }
    }

    return index;
}

int main()
{
    int size = 0, No = 0;
    int * arr = NULL;

    printf("Enter size Array : \n");
    scanf("%d", &size);

    arr = (int *) malloc (size * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory allocation invalide\n");
        return -1;
    }

    printf("Enter Element of Array : \n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number that you want to seach \n");
    scanf("%d", &No);

    if(isPresent(arr, size , No))
    {
        printf("Number is present ");
    }
    else
    {
        printf("Number is not Present ");
    }

    int ans = FisrtOcc(arr, size, No);
    printf("First Occerance is : %d\n", ans);

    ans = lastOcce(arr, size, No);
    printf("last Occerance is : %d", ans);

    free(arr);

    return 0;
}