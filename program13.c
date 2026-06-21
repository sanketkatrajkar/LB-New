



/*
Accept the number from the user and print the even factors of that number

Input  : 24
Output : 1 2 3 4 6 12

Input  : 36 
Output : 1 2 3 4 6 12 18 

*/

#include<stdio.h>

void DisplayFactors(int No)
{
    for(int i = 1; i < No; i++)
    {
        if(No % i == 0)
        {
            printf("%d\t", i);
        }
    }
}


int main()
{
    int No = 0;

    printf("Enter the number : \n");
    scanf("%d", &No);

    DisplayFactors(No);

    return 0;
}