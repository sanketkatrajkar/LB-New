

#include<stdio.h>

void Display(int No)
{
    while(No > 0)
    {
        printf("*\t");
        No--;
    }
}


int main()
{
    int No = 0;

    printf("Enter the number : \n");
    scanf("%d", &No);

    Display(No);

    return 0;
}