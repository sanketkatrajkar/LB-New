


/*
Accept the number from the user and print the even factors of that number

Input  : 36 
Output : 1 2 3 4 6 12 18 

*/

#include<stdio.h>

void EvenFactors(int No)
{
    for(int i = 2; i < No; i++)
    {
        if(No % i == 0 && i % 2 == 0)
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

    EvenFactors(No);

    return 0;
}