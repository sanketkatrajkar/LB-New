
/*
     check Number is Divisible by 5  
*/

#include<stdio.h>
#include<stdbool.h>


bool isDivisible(int No)
{
    if(No % 5 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    int No = 0;

    printf("Enter the number : \n");
    scanf("%d", &No);

    if(isDivisible(No))
    {
        printf("Number is divisible by 5 ");
    }
    else
    {
        printf("Nubmer is not divisible by 5");
    }

    return 0;
}