

/*
   Write the program display the 5 to 1 on sceen 
*/

#include<stdio.h>

void Display(int No)
{
    int i = 0;

    for(i = No; i >= 1; i--)
    {
        printf("%d ", i);
    }

    printf("\n");

    i = No;
    while(i >= 1)
    {
        printf("%d ", i);
        i--;
    }
}

int main()
{
    int No = 0;

    printf("Enter the number :\n");
    scanf("%d", &No);

    Display(No);

    return 0;
}