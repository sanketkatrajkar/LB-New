

/*
Accept the two number form user and display the first Number of second number times :

Input  : 12 3
Output : 12 12 12 

Input  : 1 5
Output : 1 1 1 1 1

Input  : 20 0
Output : 

*/

#include<stdio.h>

void Display(int No , int freq)
{
    int i = 0;

    for(i = freq; i >= 1; i--)
    {
        printf("%d ", No);
    }
}


int main()
{
    int No1 = 0, No2 = 0;

    printf("Enter the first Number : \n");
    scanf("%d", &No1);

    printf("Enter the second Number : \n");
    scanf("%d", &No2);

    Display(No1 , No2);

    return 0;
}