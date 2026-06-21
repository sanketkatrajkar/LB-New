
/*
Accept the number from the user and print that number even on screen 

Input  : 3
Output : 2 4 6

Input  : 7 
Output : 2 4 6 8 10 12 14

*/

#include<stdio.h>

void PrintEven(int No)
{
    if(No <= 0)
    {
        return;
    }

    for(int i = 1; i <= No; i++)
    {
        printf("%d\t", i * 2); 
    }
}

int main()
{
    int No = 0;

    printf("Enter the number : \n");
    scanf("%d", &No);

    PrintEven(No);

    return 0;
}