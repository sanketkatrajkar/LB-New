

/*

   Accept the number from the user and if the number is less that 10 print "Hello" otherwise print "Demo"

*/

#include<stdio.h>

void Display(int No)
{
    if(No < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}


int main()
{
    int No = 0;

    printf("Enter the Number : \n");
    scanf("%d", &No);

    Display(No);
    
    return 0;
}