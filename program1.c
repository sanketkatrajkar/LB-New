

/*
    Write the program divide two numbers 
    for only Integer Numbers 
*/

#include<stdio.h>

int Division(int No1 , int No2)
{
    int ans = 0;

    if(No2 > No1)
    {
        return -1;
    }

    ans = No1 / No2;

    return ans;
}

int main()
{
    int value1 = 0, value2 = 0;
    int ans = 0;

    printf("Enter the first number : \n");
    scanf("%d", &value1);

    printf("Enter the second number : \n");
    scanf("%d", &value2);

    ans = Division(value1 , value2);

    printf("Division of two numbers is : %d", ans);
    
    return 0;
}