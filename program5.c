

#include<stdio.h>

void Display(int No)
{
    int i = 0;

    for(int i = 0; i < No; i++)
    { 
        printf("* \t");
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