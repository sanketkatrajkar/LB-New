

/*

Accept the Nmber form user and display the multiplication of the factors. 

Input : 12
Ouput : 144 (1 * 2 * 3 * 4 * 6)

*/


#include<stdio.h>

int FactorsMultiplication(int No)
{
    int product = 1;

    for(int i = 1;  i <= No / 2; i++)
    {
        if(No % i == 0)
        {
            product = product * i;
        }
    }

    return product; 
}


int main()
{
    int No = 0;

    printf("Enter the number : \n");
    scanf("%d", &No);

    int Ret = FactorsMultiplication(No);

    printf("Multiplication of factocrs of Number is : %d", Ret);

    return 0;
}