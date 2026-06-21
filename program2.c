

/*
    Write the 5 time "Marvellous" on screen ;
*/

#include<stdio.h>

void Display(int No)
{
    int i = 0;

    for(int i = 0; i < No; i++)
    {
        printf("Marvellous \n");
    }
}

int main()
{
    int No = 0;

    printf("Enter the number that you want to times print \n");
    scanf("%d", &No);

    Display(No);
    
    return 0;
}