

// check the number is even or odd 


#include<stdio.h>
#include<stdbool.h>

bool EvenOdd(int No)
{
    if(No % 2 == 0 )
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is odd \n");
    }
}


int main()
{
    int No = 13;

    EvenOdd(No);

    return 0;
}